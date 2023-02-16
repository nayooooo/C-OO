/**
 * @file main.c
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#include "main.h"

int main(int argc, char *argv[])
{
    Object obj;
    Object_Init(&obj, "apple", 1);

    printf("The object's name is %s.\r\n", obj.name);
    printf("The object's age is %d.\r\n", Object_vptr()->getAge(&obj));

    return 0;
}
