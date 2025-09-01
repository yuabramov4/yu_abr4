#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    // выделяем память для одного объекта double
    double *p_double = malloc(sizeof(double));
    if (p_double)
    {
        *p_double = 3.1415;
        printf("*p_double = %f\n", *p_double);
    }
    free(p_double);
 
    // выделяем память для одно объекта long
    long *p_long = malloc(sizeof *p_long);
    if (p_long)
    {
        *p_long = 32;
        printf("*p_long: %ld\n", *p_long);
    }
    free(p_long);
}
