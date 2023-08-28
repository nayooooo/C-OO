/**
 * @file main.c
 * @author yewan
 * @brief
 * @version 1.0
 * @date 2023-01-11
 *
 */

#include "main.h"

struct person p;

int main(int argc, char *argv[])
{
    person_init(&p, "Bob");

    printf("p_name: %s\r\n", p.name(&p));

    return 0;
}
