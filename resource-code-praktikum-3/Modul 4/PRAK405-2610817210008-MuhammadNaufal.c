#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int total_sum = 0;
    
    for (int i = 1; i <= n; i++) {
        int line_sum = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, k);
            line_sum += (j * k);
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", line_sum);
        total_sum += line_sum;
    }
    printf("%d\n", total_sum);
    
    return 0;
}