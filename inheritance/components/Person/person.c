/**
 * @file person.c
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#include "person.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* private VISIBILITY -------------------------------------------*/

/* private inheritance struct -----------------------------------*/

// #include "includes.h"

// typedef struct Person_BaseClass_Internal_Struct{
//     Includes *includes;
// }Person_BaseClass_Internal_Struct;

/* private struct -----------------------------------------------*/

typedef struct Person_Internal_Method_Table Person_Internal_Method_Table;

typedef struct Person_Internal{
    union{
        Person public;
        void *intro;
    };
    // Person_BaseClass_Internal_Struct *bc_i_t;
    uint8_t IQ;             // 智商
    uint8_t EQ;             // 情商
    Person_Internal_Method_Table *ivptr;
}Person_Internal;

typedef struct Person_Internal_Method_Table{
    uint8_t (*setIQ)(Person *const this, uint8_t IQ);
}Person_Internal_Method_Table;

/* extern private method ----------------------------------------*/


/* construction and destructor ----------------------------------*/

/* public method ------------------------------------------------*/

/* private method -----------------------------------------------*/
