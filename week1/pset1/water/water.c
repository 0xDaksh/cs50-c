/*
* Water
*
* Written by Daksh Miglani <dak.sh>
* CS50 Pset1
*/
// 1 minute = 12 bottles.
#include <cs50.h>
#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Minutes into Shower: ");
        n = get_int();
    } while(n == -1);
    
    printf("Bottles of Water: %i\n", n * 12);
}