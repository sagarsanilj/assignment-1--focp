#include <stdio.h>

int main() {
    int rows;

    // Number of rows in the pattern
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // Print 1 if the sum of indices is even, otherwise print 0
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}

