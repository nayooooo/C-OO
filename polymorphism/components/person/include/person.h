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
	speak micro
========================================================*/

#define PERSON_SPEAK_HELLO          (1)
#define PERSON_SPEAK_NAME           (2)

/*========================================================
	base object
========================================================*/
struct person {
	object_t parent;

    obj_uint8_t age;

    const char*     (*name)         (struct person* p);
    obj_err_t       (*speak)        (struct person* p, obj_base_t type, ...);
};
typedef struct person* person_t;

obj_err_t person_init(person_t p, object_t parent, const char* name);

#endif // !__PERSON_H__
