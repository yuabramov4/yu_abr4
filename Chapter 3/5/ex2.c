#include <stdio.h>
 
void print_person(char* name, int age)
{
    printf("Name: %s \t Age: %d \n", name, age);
}
void print_product(char* title, int price)
{
    printf("Title: %s \t Price: %d \n", title, price);
}
int main(void)
{
    // определяем указатель на функцию
    void (*printer)(char*, int);
    printer = print_person;
    printer("Tom", 38);
 
    printer = print_product;
    printer("Phone", 12999);
    return 0;
}
