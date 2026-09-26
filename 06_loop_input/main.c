// Exercise 6 – Loop with User Input
// Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.6
// What the program does: The program asks the user for the number of values to process and then collects those values one by one to output their total sum.
// Concepts used: for loop, dynamic iteration limit, accumulator variable, scanf inside loop.
// How it works: The loop starts at i = 1 and continues while i <= count. After each iteration, ++i increments the step. Each input value is read and added to the running total.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    int value = 0;
    int total = 0;

    printf("How many values do you want to process? ");
    scanf("%d", &count);

    for (int i = 1; i <= count; ++i) {
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        total += value;
    }

    printf("The total sum of the %d values is: %d\n", count, total);
    return 0;
}
