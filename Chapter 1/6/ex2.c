#include <stdio.h>
  
int main(void)
{
    for(int i=11; i < 20; i++)
    {
        if(i % 2 == 1)  // если остаток от деления на 2 равен 1, то число нечетное
        {
            printf("%d ", i);
        }
         
    }
    return 0;
}
