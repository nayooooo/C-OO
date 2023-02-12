/**
 * @file class.c
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#include "class.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* private VISIBILITY -------------------------------------------*/

#define CLASS_PRIVATE                   Class_Internal*

#define CLASS_INTRO_VISIBILITY          CLASS_PRIVATE
#define CLASS_AGE_VISIBILITY            CLASS_PRIVATE

#define CLASS_IVPTR_VISIBILITY          CLASS_PRIVATE

/* private struct -----------------------------------------------*/

typedef struct Class_Internal_Method_Table Class_Internal_Method_Table;

/* count object num */
static uint32_t objectNum = 0;
/* mark table */
static Class_Method_Table *vptr = NULL;
static Class_Internal_Method_Table *ivptr = NULL;

typedef struct Class_Internal{
    union{
        Class public;
        void *intro;
    };
    uint8_t age;
    Class_Internal_Method_Table *ivptr;
}Class_Internal;

typedef struct Class_Internal_Method_Table{
    void (*set_Age)(Class *const this, uint8_t age);
}Class_Internal_Method_Table;

/* extern private method ----------------------------------------*/

/**
 * @brief Set the Age object
 *
 * @param this object's pointer
 * @param age new age
 */
void set_Age(Class *const this, uint8_t age);

/* construction and destructor ----------------------------------*/

Class *new_Class(uint8_t *name, uint8_t age)
{
    /* object */
    Class_Internal *this = (Class_Internal*)malloc(sizeof(Class_Internal));
    memset(this, 0, sizeof(Class_Internal));
    /* method */
    if (objectNum == 0) {
        vptr = (Class_Method_Table*)malloc(sizeof(Class_Method_Table));
        memset(vptr, 0, sizeof(Class_Method_Table));
        ivptr = (Class_Internal_Method_Table*)malloc(sizeof(Class_Internal_Method_Table));
        memset(ivptr, 0, sizeof(Class_Internal_Method_Table));
        /* public behavior */
        vptr->get_ObjectNum = get_ObjectNum;
        vptr->get_Age = get_Age;
        /* private behavior */
        ivptr->set_Age = set_Age;
    }
    ((CLASS_VPTR_VISIBILITY)this)->vptr = vptr;
    ((CLASS_IVPTR_VISIBILITY)this)->ivptr = ivptr;

    /* public attribute */
    ((CLASS_NAME_VISIBILITY)this)->name = name;
    /* private attribute */
    ((CLASS_AGE_VISIBILITY)this)->age = age;

    objectNum++;

    printf("The object(%s) has been created!\r\n",
        ((CLASS_NAME_VISIBILITY)this)->name);

    return (Class*)this;
}

Class *delete_Class(Class *this)
{
    printf("The object(%s) will be freed!\r\n",
        ((CLASS_NAME_VISIBILITY)this)->name);

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
    if((Class_Internal*)this != NULL) {
        free((void*)((Class_Internal*)this));
        this = NULL;
    }

    objectNum--;

    return this;
}

/* public method ------------------------------------------------*/

uint32_t get_ObjectNum(Class *const this)
{
    return objectNum;
}

uint8_t get_Age(Class *const this)
{
    return ((CLASS_AGE_VISIBILITY)this)->age;
}

/* private method -----------------------------------------------*/

void set_Age(Class *const this, uint8_t age)
{
    ((CLASS_AGE_VISIBILITY)this)->age = age;
}
