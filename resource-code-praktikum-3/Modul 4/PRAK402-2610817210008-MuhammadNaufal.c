#include <stdio.h>

int main() {
    int bilangan;
    scanf("%d", &bilangan);

    int gangen = 1;
    for (int i = 1; i <= bilangan; i++) {
        if (i % 2 != 0) { 
            if (!gangen) printf(" "); 
            printf("%d", i);
            gangen = 0;
        }
    }
    printf("\n"); 

    gangen = 1;
    for (int i = bilangan; i >= 2; i--) { 
        if (i % 2 == 0) { 
            if (!gangen) printf(" ");
            printf("%d", i);
            gangen = 0;
        }
    }
    printf("\n");

    return 0;
}