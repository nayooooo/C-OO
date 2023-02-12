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

/* extern private method ----------------------------------------*/

typedef struct Object_Internal_Method_Table Object_Internal_Method_Table;

/**
 * @brief Get ivptr's pointer(type: const)
 *
 * @return const Object_Internal_Method_Table* ivptr's pointer(type: const)
 */
static const Object_Internal_Method_Table *Object_ivptr(void);

/**
 * @brief Set the Age object
 *
 * @param this object's pointer
 * @param age new age
 */
void Object_SetAge(Object *const this, uint8_t age);

/* private struct -----------------------------------------------*/

typedef struct Object_Internal{
    union{
        Object public;
        void *intro;
    };
    uint8_t age;
}Object_Internal;

typedef struct Object_Internal_Method_Table{
    void (*setAge)(Object *const this, uint8_t age);
}Object_Internal_Method_Table;

/* mark table */
static Object_Method_Table vptr = {
    .getAge = Object_GetAge,
};
static Object_Internal_Method_Table ivptr = {
    .setAge = Object_SetAge,
};

/* construction and destructor ----------------------------------*/

Object *new_Object(Object *const this, uint8_t *name, uint8_t age)
{
    /* object */
    memset(this, 0, sizeof(Object_Internal));

    /* public attribute */
    ((OBJECT_NAME_VISIBILITY)this)->name = name;
    /* private attribute */
    ((OBJECT_AGE_VISIBILITY)this)->age = age;

    printf("The object(%s) has been created!\r\n",
        ((OBJECT_NAME_VISIBILITY)this)->name);

    return (Object*)this;
}

Object *delete_Object(Object *this)
{
    printf("The object(%s) will be freed!\r\n",
        ((OBJECT_NAME_VISIBILITY)this)->name);

    if((Object_Internal*)this != NULL) {
        free((void*)((Object_Internal*)this));
        this = NULL;
    }

    return this;
}

/* vptr and ivptr -----------------------------------------------*/

const Object_Method_Table *Object_vptr(void)
{
    return (const Object_Method_Table*)(&vptr);
}

static const Object_Internal_Method_Table *Object_ivptr(void)
{
    return (const Object_Internal_Method_Table*)(&ivptr);
}

/* public method ------------------------------------------------*/

uint8_t Object_GetAge(Object *const this)
{
    return ((OBJECT_AGE_VISIBILITY)this)->age;
}

/* private method -----------------------------------------------*/

void Object_SetAge(Object *const this, uint8_t age)
{
    ((OBJECT_AGE_VISIBILITY)this)->age = age;
}
