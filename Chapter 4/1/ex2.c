#include <stdio.h>
  
#define MAX(a,b) (a > b ? a : b)
  
int main(void)
{
    int x = 10;
    int y = 30;
    printf("%d \n", MAX(x,y));
    return 0;
}
