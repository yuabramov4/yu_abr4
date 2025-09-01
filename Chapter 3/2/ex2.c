#include <stdio.h>
 
void print_number(const int n)
{
    printf("%d\n", n * 2);
}
 
int main(void)
{
    print_number(10);   // 20
    print_number(14);   // 28
    return 0;
}
