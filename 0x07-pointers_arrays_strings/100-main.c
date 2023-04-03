#include "main.h"
#include <stdio.h>
[2;2R[>77;30603;0c]10;rgb:bfbf/bfbf/bfbf]11;rgb:0000/0000/0000
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
