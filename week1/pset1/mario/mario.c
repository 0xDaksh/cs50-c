/*
* Mario
*
* Written by Daksh Miglani <dak.sh>
* CS50 Pset1
*/

#include <cs50.h>
#include <stdio.h>

int main(void) {
    int h;
    do {
        printf("What about the height: ");
        h = get_int();
    } while(h < 0 || h > 23);
    
    for(int i = 0; i < h; i++) {
        for(int c1 = i; c1 < h - 1; c1++) {
            printf(" ");
        }
        for(int c2 = 0; c2 < i + 1; c2++) {
            printf("#");
        }
        printf("  ");
        for(int c3 = 0; c3 < i + 1; c3++) {
            printf("#");
        }
        printf("\n");
    }
}