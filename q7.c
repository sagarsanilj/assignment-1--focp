#include <stdio.h>
#include <math.h>

void binaryToDecimal() {
    int binary, decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("The decimal equivalent is: %d\n", decimal);
}

void decimalToBinary() {
    int decimal, binary = 0, base = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * base;
        decimal = decimal / 2;
        base = base * 10;
    }

    printf("The binary equivalent is: %d\n", binary);
}

int main() {
    int choice;

    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        binaryToDecimal();
    } else if (choice == 2) {
        decimalToBinary();
    } else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
