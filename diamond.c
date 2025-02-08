#include <stdio.h>
#include <string.h>

void printDiamond(char str[]) {
    int len = strlen(str);
    int i, j, space;
    
    // Upper part of the diamond
    for (i = 0; i < len; i++) {
        for (space = len - i - 1; space > 0; space--)
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("%c ", str[j]);
        printf("\n");
    }
    
    // Lower part of the diamond
    for (i = len - 2; i >= 0; i--) {
        for (space = len - i - 1; space > 0; space--)
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("%c ", str[j]);
        printf("\n");
    }
}

int main() {
    char str[] = "SABYA";
    printDiamond(str);
    return 0;
}