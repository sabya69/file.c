#include <stdio.h>
#include <string.h>
#include <time.h>

void delay(unsigned int mseconds) {
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main() {
    char s1[100], s2[100];
    int l, i, j, k = 1;

    printf("\nEnter a string: ");
    fgets(s1, sizeof(s1), stdin);  // Safe alternative to gets()
    s1[strcspn(s1, "\n")] = 0;  // Remove newline character from fgets()

    l = strlen(s1);

    printf("\ns1= %s", s1);
    
    while (k < 10) {  // Changed loop condition to prevent infinite loop
        delay(100);
        k++;

        if (k % 2 == 0) {
            for (j = 1; j < l; j++) {
                for (i = 0; i < l; i++) {
                    s2[i] = ' ';
                }
                s2[j] = s1[j];
                s2[l] = '\0';  // Ensure null-termination
                printf("\n%s", s2);
            }
        } else {
            for (j = l - 2; j >= 0; j--) {
                for (i = 0; i < l; i++) {
                    s2[i] = ' ';
                }
                s2[j] = s1[j];
                s2[l] = '\0';  // Ensure null-termination
                printf("\n%s", s2);
            }
        }
    }

    return 0;
}


