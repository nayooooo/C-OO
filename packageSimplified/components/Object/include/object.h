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

/* public VISIBILITY --------------------------------------------*/

#define OBJECT_PUBLIC                    Object*

#define OBJECT_NAME_VISIBILITY           OBJECT_PUBLIC

#define OBJECT_VPTR_VISIBILITY           OBJECT_PUBLIC
#define OBJECT_GET_AGE_VISIBILITY        OBJECT_PUBLIC

/* public struct ------------------------------------------------*/

typedef struct Object{
    uint8_t *name;
}Object;

typedef struct Object_Method_Table{
    uint8_t (*getAge)(Object *const this);
}Object_Method_Table;

/* public method ------------------------------------------------*/

Object *new_Object(Object *const this, uint8_t *name, uint8_t age);
Object *delete_Object(Object *this);

const Object_Method_Table *Object_vptr(void);

/**
 * @brief Get the Age object
 *
 * @param this object's pointer
 * @return uint8_t object's age
 */
uint8_t Object_GetAge(Object *const this);

#endif /* __OBJECT_H */
