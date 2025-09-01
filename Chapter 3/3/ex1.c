#include <stdio.h>
 
int calculate(int m, int n)
{
    if(m > n)
    {
        return m - n;
    }
    else
    {
        return m + n;
    }
}
 
int main(void)
{
    int result1 = calculate(6,2);
    printf("%d \n", result1);
    int result2 = calculate(-6, 2);
    printf("%d \n", result2);
    return 0;
}
