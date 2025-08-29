#include <stdio.h>

int main() {
    int num, divisor;

    printf("Enter the number to check for divisibility: ");
    scanf("%d", &num);

    
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    
    if (divisor != 0 && num % divisor == 0) {
        printf("%d is divisible by %d.\n", num, divisor);
    } else if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("%d is NOT divisible by %d.\n", num, divisor);
    }

    return 0;
}