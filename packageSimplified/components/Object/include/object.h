/**
 * @file object.h
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#ifndef __OBJECT_H
#define __OBJECT_H

#include <stdint.h>

/* public struct ------------------------------------------------*/

typedef struct Object_Internal{
    uint8_t age;
}Object_Internal;

typedef struct Object{
    // public
    uint8_t *name;
    // private
    Object_Internal iobj;
}Object;

typedef struct Object_Method_Table{
    uint8_t (*getAge)(Object *const this);
}Object_Method_Table;

/* public method ------------------------------------------------*/

Object *Object_Init(Object *const this, uint8_t *name, uint8_t age);

const Object_Method_Table *Object_vptr(void);

/**
 * @brief Get the Age object
 *
 * @param this object's pointer
 * @return uint8_t object's age
 */
uint8_t Object_GetAge(Object *const this);

#endif /* __OBJECT_H */
