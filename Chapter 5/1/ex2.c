#include <stdio.h>
 
typedef struct
{
    char *name;
    int age;
    double salary;
} employee;
 
int main(void)
{
    employee tom = {"Tom", 38, 5500};
    employee sam = {"Sam", 23, 4500};
    printf("Name: %s \t Age: %d \t Salary: %.2f\n", tom.name, tom.age, tom.salary);
    printf("Name: %s \t Age: %d \t Salary: %.2f\n", sam.name, sam.age, sam.salary);
    return 0;
}
