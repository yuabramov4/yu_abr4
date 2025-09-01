#include <stdio.h>
 
enum color
{
    RED,
    GREEN,
    BLUE
};
int main(void)
{
    enum color myColor = GREEN;
    switch(myColor)
    {
        case RED:
            printf("red");
            break;
        case GREEN:
            printf("green");
            break;
        case BLUE:
            printf("blue");
            break;
    }
    return 0;
}
