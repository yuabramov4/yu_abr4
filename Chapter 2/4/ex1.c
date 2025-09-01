#include <stdio.h>
 
int main()
{
    char *person[] = {"Tom", "Bob", "Sam"};
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", person[i]);
    }
 
    // или так
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", *(person + i));
    }
    return 0;
}
