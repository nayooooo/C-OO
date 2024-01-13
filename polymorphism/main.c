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
    struct object obj;
    struct person p;

    person_init(&p, &obj, "Bob");

    printf("p_name: %s\r\n", p.name(&p));
    printf("p_speak: \r\n");
    p.speak(&p, PERSON_SPEAK_HELLO, "polymorphism");
    p.speak(&p, PERSON_SPEAK_NAME);

    return 0;
}
