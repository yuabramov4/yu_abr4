#include <stdio.h>
 
int main()
{
    // определяем массив
    int array[] = {1, 2, 3, 4, 5};
    // определяем указатель
    int *p = array;
    // выводим элементы массива на консоль с помощью указателя
    for (int i = 0; i < 5; i++)
    {
        printf("%d", p[i]);
    }
    // или так
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(p + i));
    }
    return 0;
}
