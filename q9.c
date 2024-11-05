#include <stdio.h>

int main() {
    int rows, i, j, k;

   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (k = 1; k <= i; k++) {
            if ((k % 2) == 1)
                printf("0");
            else
                printf("1");
        }

        for (j = 1; j <= (2 * (rows - i)); j++) {
            printf(" ");
        }

        for (k = 1; k <= i; k++) {
            if ((k % 2) == 1)
                printf("0");
            else
                printf("1");
        }

        printf("\n");
    }

    return 0;
}
