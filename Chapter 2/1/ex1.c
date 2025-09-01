#include <stdio.h>
 
int main()
{
    // определяем переменную int
    int n = 10;
 
    // определяем указатель на переменную n
    int *pn = &n;
 
    // адрес переменной
    printf("Address: %p \n", (void *)pn);
 
    // значение переменной
    printf("Value: %d \n", *pn);
    return 0;
}
