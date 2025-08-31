#include <stdio.h>

int main() {
    double num; // Using double to allow for decimal numbers

    // Ask the user to enter a number
    printf("Enter a number: ");

    // Read the number entered by the user
    scanf("%lf", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf(" It is a positive number.\n", num);
    } else if (num < 0) {
        printf(" It is a negative number.\n", num);
    } else {
        printf("You entered zero.\n");
    }

    return 0; 
}