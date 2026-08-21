#include <stdio.h>
int main () {
    int i, j;
    int *p, *q;

    i = 3;
    j = 5;
    p = &i;
    q = &j;

    *p = *q;

    printf("A)\n", i);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("p aponta para i\n");
    printf("q aponta para j\n\n");

    i = 3;
    j = 5;
    p = &i;
    q = &j;

    p = q;

    printf("B)\n");
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);

    i = 3;
    j = 5;
    p = &i;
    q = &j;

    q = &i;
    *q = 100;

    printf("D)\n");
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("p aponta para i\n");
    printf("p aponta para i\n");

    return 0;
}