#include <stdio.h>
#include <windows.h>

int main() {
    printf("(C) Lindos Command Terminal 2023\n\n");
    char s[20];
    while (1) {
        printf("> ");
        gets(s);
        system(s);
    };
}
