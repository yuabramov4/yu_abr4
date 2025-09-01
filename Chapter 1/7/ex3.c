#include <stdio.h>
  
int main()
{
    int numbers[] = {1, 2, 3, 4};   // определяем массив
    numbers[0] = numbers[0] * 2;  // увеличиваем в 2 раза первый элемент
    // увеличиваем все элементы в 2 раза
    for(int i = 0; i < 4; i++)
    {
        numbers[i] = numbers[i] * 2;
    }
    // выводим элементы массива на консоль
    for(int i = 0; i < 4; i++)
    {
        printf("%d", numbers[i]);
    }
    return 0;
}
