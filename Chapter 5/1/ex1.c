#include <stdio.h>
 
struct employee
{
    char *name;
    int age;
    double salary;
};
int main(void)
{
    struct employee sam = {"Sam", 23, 4500};
    printf("Name: %s\n", sam.name);
    printf("Age: %d\n", sam.age);
    printf("Salary: %.2f\n", sam.salary);
    return 0;
}
