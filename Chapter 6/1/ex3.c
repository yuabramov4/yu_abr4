#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    // выделяем память для трех объектов long
    int m = 3;
    long *ptr = malloc(m * sizeof(long));
    if (ptr)
    {
        for(int i = 0; i < m; i++)
        {
            ptr[i] = i + 1;     // устанавливаем значения
            printf("ptr[%d]: %ld\n",i, ptr[i]);
        }
    }
    // увеличиваем выделенную память до 5 объектов long
    int n = 5;
    long * ptr_new = realloc(ptr, n);
    if(ptr_new)
    {
        // устанавливаем и выводим значения для новых 2-х элементов
        for(int i = m; i < n; i++)
        {
            ptr_new[i] = i + 1;
            printf("ptr[%d]: %ld\n",i, ptr_new[i]);
        }
        free(ptr_new);
    }
    else
    {
        free(ptr);
    }
}
