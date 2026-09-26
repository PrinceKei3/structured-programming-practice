// ## Exercise 8 – Interactive Console Program
// Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.19
// What the program does: The program asks the user to select menu choices for temperature conversion and then performs the calculation repeatedly until option 3 is selected.
// Concepts used: while loop, sentinel-controlled menu loop, double floating-point variables, nested branching.
// How it works: The loop starts and continues while choice != 3. The condition evaluates the choice entered. After each selection, the menu prints again until option 3 breaks the loop.

#include <stdio.h>
#include <stdlib.h>


int main() {
    int choice = 0;
    double temp = 0.0;
    double converted = 0.0;

    while (choice != 3) {
        printf("\n--- Temperature Conversion Menu ---\n");
        printf("1. Convert Fahrenheit to Celsius\n");
        printf("2. Convert Celsius to Fahrenheit\n");
        printf("3. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input! Please enter a number (1, 2, or 3).\n");
            continue;
        }

        if (choice == 1) {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &temp);
            converted = (temp - 32.0) * 5.0 / 9.0;
            printf("%.2f Fahrenheit = %.2f Celsius\n", temp, converted);
        } else if (choice == 2) {
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &temp);
            converted = (temp * 9.0 / 5.0) + 32.0;
            printf("%.2f Celsius = %.2f Fahrenheit\n", temp, converted);
        } else if (choice == 3) {
            printf("Exiting program. Goodbye!\n");
        } else {
            printf("Invalid selection. Please enter 1, 2, or 3.\n");
        }
    }

    return 0;
}
