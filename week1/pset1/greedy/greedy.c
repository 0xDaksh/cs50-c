#include <cs50.h>
#include <stdio.h>

int main(void) {
    // quarter = 0.25,  dime = 0.10, cent = 0.01, nickel = 0.05
    float c;
    do {
        printf("What's owed: ");
        c = get_float();
    } while (c <= 0);
    int coins = 0;
    c = (c * 100) + 0.1;
    for(int i = 0; c > 0; i++) {
        if(c >= 0.25) {
            c = c - 0.25;
            coins++;
        } else if(c >= 0.10 && c < 0.25) {
            c = c - 0.10;
            coins++;
        } else if(c >= 0.05 && c < 0.10) {
            c = c - 0.05; 
            coins++;
        } else {
            c = c - 0.01;
            coins++;
        }
    }
    printf("%i\n", coins);
}