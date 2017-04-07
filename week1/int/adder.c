#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    printf("x is ");
    float x = get_int();
    printf("y is ");
    float y = get_int();
    
    printf("sum of %f and %f is %f\n", x, y, x+y);
    printf("division of %f and %f is %f", x, y, x / y);
}