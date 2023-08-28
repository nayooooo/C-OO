/**
 * @file person.h
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#ifndef __PERSON_H__
#define __PERSON_H__

#include "object.h"

/*========================================================
	base object
========================================================*/
struct person {
	struct object parent;

    obj_uint8_t age;

    const char*     (*name)         (struct person* p);
};
typedef struct person* person_t;

obj_err_t person_init(person_t p, const char* name);

#endif // !__PERSON_H__
