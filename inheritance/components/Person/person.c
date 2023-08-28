/**
 * @file person.c
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#include "person.h"

#include <stdlib.h>
#include <string.h>

const char* _person_name(struct person* p)
{
    if (p == OBJ_NULL) return OBJ_NULL;

    return p->parent.name;
}

obj_err_t person_init(person_t p, const char* name)
{
    if (p == OBJ_NULL) return -OBJ_PARAM;
    if (name == OBJ_NULL) return -OBJ_PARAM;

    obj_memcpy(p->parent.name, (void*)name, sizeof(p->parent.name));

    p->name = _person_name;

    return OBJ_EOK;
}
