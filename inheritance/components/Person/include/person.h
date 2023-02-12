/**
 * @file person.h
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#ifndef __PERSON_H
#define __PERSON_H

#include <stdint.h>

/* public VISIBILITY --------------------------------------------*/

#define PERSON_PUBLIC                    Person*

/* public inheritance struct ------------------------------------*/

#include "object.h"

typedef struct Person_BaseClass_Struct{
    Object *object;
}Person_BaseClass_Struct;

/* public struct ------------------------------------------------*/

typedef struct Person_Method_Table Person_Method_Table;

typedef struct Person{
    Person_BaseClass_Struct *bc_t;
    uint8_t *sex;           // 性别
    Person_Method_Table *vptr;
}Person;

typedef struct Person_Method_Table{
    uint8_t (*getIQ)(Person *const this);
}Person_Method_Table;

/* public method ------------------------------------------------*/

#endif /* __PERSON_H */
