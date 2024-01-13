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
#include <stdarg.h>

const char* _person_name(struct person* p)
{
    if (p == OBJ_NULL) return OBJ_NULL;

    return p->parent->name;
}

#include <stdio.h>
static obj_err_t _person_speak_hello(const char* str)
{
    printf("Hello %s\r\n", str);
}

static obj_err_t _person_speak_name(struct person* p)
{
    printf("Hello %s\r\n", p->parent->name);
}

obj_err_t _person_speak(struct person* p, obj_base_t type, ...)
{
    if (p == OBJ_NULL) return -OBJ_PARAM;

    switch (type)
    {
        case PERSON_SPEAK_HELLO:
            {
                va_list ap;
                va_start(ap, type);
                const char* str = va_arg(ap, const char*);
                va_end(ap);
                if (str == OBJ_NULL) return -OBJ_PARAM;
                _person_speak_hello(str);
            }
            break;
        case PERSON_SPEAK_NAME:
            {
                _person_speak_name(p);
            }
            break;
        default:
            break;

    }

    return OBJ_EOK;
}

obj_err_t person_init(person_t p, object_t parent, const char* name)
{
    if (p == OBJ_NULL) return -OBJ_PARAM;
    if (parent == OBJ_NULL) return -OBJ_PARAM;
    if (name == OBJ_NULL) return -OBJ_PARAM;

    p->parent = parent;
    obj_memset(p->parent->name, 0, sizeof(p->parent->name));
    obj_memcpy(p->parent->name, (void*)name, sizeof(p->parent->name) - 1);

    p->name = _person_name;
    p->speak = _person_speak;

    return OBJ_EOK;
}
