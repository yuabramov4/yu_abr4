#include <stdio.h>
 
int main()
{
    // определяем переменную int
    int n = 10;
 
    // определяем указатель на переменную n
    int *pn = &n;
 
    // адрес переменной
    printf("Before change: %d \n", *pn);    // Before change: 10
 
    // изменяем значение переменной через указатель
    *pn = 22;
    // значение переменной
    printf("After change: %d \n", *pn);     // After change: 22
    return 0;
}
