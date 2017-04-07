#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    printf("Hey, What's your name m8?\n");
    string name = get_string();
    printf("Hello, %s\n", name); // %s for string
}