/**
 * @file man.h
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2024-01-13
 *
 */

#ifndef __MAN_H__
#define __MAN_H__

#include "object.h"
#include "person.h"

/*========================================================
	base object
========================================================*/
struct man {
	object_t parent;

    const char*     (*name)         (struct person* p);
};
typedef struct man* man_t;

obj_err_t man_init(man_t p, object_t parent, const char* name);

#endif // !__MAN_H__
