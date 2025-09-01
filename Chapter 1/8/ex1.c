#include <stdio.h>
  
int main(void)
{
    int count;
    double price;
    printf("Input count:");
    scanf("%d", &count);
 
     
    printf("Input price:");
    scanf("%lf", &price);
     
    printf("Price: %.2lf \tCount: %d \n", price, count);
    return 0;
}
