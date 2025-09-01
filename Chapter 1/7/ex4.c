#include <stdio.h>
  
#include <stdio.h>
 
int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6}; // определяем массив
 
    int n = sizeof(numbers) / sizeof(numbers[0]);   // длина массива
    // находим середину массива
    int m = n / 2;      // индекс среднего элемента
    // инвертируем массив
    // проходим до середины 
    // и обмениваем значения i-того элемента с начала и i-того элемента с конца
    for(int i = 0; i < m; i++)
    {
        int temp = numbers[i];
        numbers[i] = numbers[n-i-1];
        numbers[n-i-1] = temp;
    }
    // выводим элементы массива на консоль
    for(int i = 0; i < n; i++)
    {
        printf("%d", numbers[i]);
    }
    return 0;
}
</stdio.h>
