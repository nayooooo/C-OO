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
#include <string.h>

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

Object *Object_Init(Object *const this, uint8_t *name, uint8_t age)
{
    /* object */
    memset(this, 0, sizeof(Object));

    /* public attribute */
    this->name = name;
    /* private attribute */
    this->iobj.age = age;

    return (Object*)this;
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
    return this->iobj.age;
}

/* private method -----------------------------------------------*/

void Object_SetAge(Object *const this, uint8_t age)
{
    this->iobj.age = age;
}
