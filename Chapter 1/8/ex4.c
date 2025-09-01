#include <stdio.h>
  
int main(void)
{
    float width,height,area;
    printf("Enter the width: ");
    scanf("%f",&width);
    printf("Enter the height: ");
    scanf("%f",&height);
    area=width*height;
    printf("Area of rectangle: %f\n",area);
    return 0;
}
