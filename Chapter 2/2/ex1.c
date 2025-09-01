#include <stdio.h>
 
int main(void)
{
    // определяем константу
    const long n = 123;
    // определяем указатель на константу
    const long *pn = &n;
 
    // определяем константный указатель
    char *const hello = "Hello";
 
    printf("Constant: %ld\n", *pn); // Constant: 123
    printf("Const pointer: %s\n", hello);       // Const pointer: Hello
    return 0;
}
