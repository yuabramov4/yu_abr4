#include <stdio.h>
  
int main(void)
{
    float length, result;
    printf("Enter the length in pounds: "); // вводим длину в футах
    scanf("%f",&length);
    result = length / 3.281;
    printf("Length in meters: %f\n",result);
    return 0;
}
