#include <stdio.h>

void swap_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap_xor(&num1, &num2);
    printf("After swapping (using XOR): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
