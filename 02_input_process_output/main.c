// Exercise 2 – Input - Process Output
// Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.4
// What the program does: The program asks the user for two integer values and then calculates and prints their sum and product.
// Concepts used:scanf function,printf function.
// How it works: scanf reads user values into two variables and printf displays the outputs.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = 0;
    int num2 = 0;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int product = num1 * num2;

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}
