#include <stdio.h>
 
struct person
{
    char *name;
    int age;
};
 
int main(void)
{
    struct person sam = {"Sam", 23};
    struct person *p_sam = &sam;
    printf("Name: %s \n", p_sam -> name);
    printf("Age: %d \n", (*p_sam).age);
    return 0;
}
