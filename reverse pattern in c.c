#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >=1; i--) {
        for (j = i; j>=1; j--) {
            printf("%d ", j*j);
        }
        printf("\n");
    }

   
} 