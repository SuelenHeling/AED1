#include <stdio.h>
int main () {

int i = 3, j = 5;
int *p, *q;

p = &i;
q = &j;

printf("a) *p = %d\n", *p);
printf("b) *p - *q = %d\n", *p - *q);
printf("d) 3 - *p /  (*q) + 7 = %d\n", 3 - *p / (*q) + 7);


    return 0;
}