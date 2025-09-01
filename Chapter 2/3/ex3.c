#include <stdio.h>
 
int main()
{
    int array[] = {3, 4, 5, 6, 7};
    int *p = array; // указатель указывает на первый элемент массива
 
    p = p + 2;      // p указывает на третий элемент массива
    printf("array[2] = %d\n", *p);      // array[2] = 5
 
    p = p + 1;      // p указывает на четвертый элемент массива
    printf("array[3] = %d\n", *p);      // array[3] = 6
    return 0;
}
