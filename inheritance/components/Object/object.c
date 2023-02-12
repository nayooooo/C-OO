/**
 * @file object.c
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#include "object.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* private VISIBILITY -------------------------------------------*/

#define OBJECT_PRIVATE                   Object_Internal*

#define OBJECT_INTRO_VISIBILITY          OBJECT_PRIVATE
#define OBJECT_AGE_VISIBILITY            OBJECT_PRIVATE

#define OBJECT_IVPTR_VISIBILITY          OBJECT_PRIVATE

/* private struct -----------------------------------------------*/

typedef struct Object_Internal_Method_Table Object_Internal_Method_Table;

/* count object num */
static uint32_t objectNum = 0;
/* mark table */
static Object_Method_Table *vptr = NULL;
static Object_Internal_Method_Table *ivptr = NULL;

typedef struct Object_Internal{
    union{
        Object public;
        void *intro;
    };
    uint8_t age;
    Object_Internal_Method_Table *ivptr;
}Object_Internal;

typedef struct Object_Internal_Method_Table{
    void (*setAge)(Object *const this, uint8_t age);
}Object_Internal_Method_Table;

/* extern private method ----------------------------------------*/

/**
 * @brief Set the Age object
 *
 * @param this object's pointer
 * @param age new age
 */
void Object_SetAge(Object *const this, uint8_t age);

/* construction and destructor ----------------------------------*/

Object *new_Object(uint8_t *name, uint8_t age)
{
    /* object */
    Object_Internal *this = (Object_Internal*)malloc(sizeof(Object_Internal));
    memset(this, 0, sizeof(Object_Internal));
    /* method */
    if (objectNum == 0) {
        vptr = (Object_Method_Table*)malloc(sizeof(Object_Method_Table));
        memset(vptr, 0, sizeof(Object_Method_Table));
        ivptr = (Object_Internal_Method_Table*)malloc(sizeof(Object_Internal_Method_Table));
        memset(ivptr, 0, sizeof(Object_Internal_Method_Table));
        /* public behavior */
        vptr->getNum = Object_GetNum;
        vptr->getAge = Object_GetAge;
        /* private behavior */
        ivptr->setAge = Object_SetAge;
    }
    ((OBJECT_VPTR_VISIBILITY)this)->vptr = vptr;
    ((OBJECT_IVPTR_VISIBILITY)this)->ivptr = ivptr;

    /* public attribute */
    ((OBJECT_NAME_VISIBILITY)this)->name = name;
    /* private attribute */
    ((OBJECT_AGE_VISIBILITY)this)->age = age;

    objectNum++;

    printf("The object(%s) has been created!\r\n",
        ((OBJECT_NAME_VISIBILITY)this)->name);

    return (Object*)this;
}

Object *delete_Object(Object *this)
{
    printf("The object(%s) will be freed!\r\n",
        ((OBJECT_NAME_VISIBILITY)this)->name);

    if (objectNum == 1) {
        if(vptr != NULL) {
            free((void*)vptr);
            vptr = NULL;
        }
        if(ivptr != NULL) {
            free((void*)ivptr);
            ivptr = NULL;
        }
    }
    if((Object_Internal*)this != NULL) {
        free((void*)((Object_Internal*)this));
        this = NULL;
    }

    objectNum--;

    return this;
}

/* public method ------------------------------------------------*/

uint32_t Object_GetNum(Object *const this)
{
    return objectNum;
}

uint8_t Object_GetAge(Object *const this)
{
    return ((OBJECT_AGE_VISIBILITY)this)->age;
}

/* private method -----------------------------------------------*/

void Object_SetAge(Object *const this, uint8_t age)
{
    ((OBJECT_AGE_VISIBILITY)this)->age = age;
}
