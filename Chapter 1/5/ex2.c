#include <stdio.h>
  
int main(void)
{
    int a = 12;
    if (a > 4 && a < 14)
    {
        printf("within range (4..14)");
    }
    else
    {
        printf("out of range");
    }
    return 0;
}
