#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    printf("Tell me a number quick\n");
    int i = get_int(); 
    printf("Hello, %i\n", i); // %i for ints 
}