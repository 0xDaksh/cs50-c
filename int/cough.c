#include <cs50.h>
#include <stdio.h>

void cough(int);
void sneeze(int);

int main(void) {
    cough(3);
    sneeze(3);
}

void say(string s, int n) {
    for(int i = 0; i < n; i++) {
        printf("%s\n", s);
    }
}

void cough(int n) {
    say("cough", n);
}
void sneeze(int n) {
    say("sneeze", n);
}