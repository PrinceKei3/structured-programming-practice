// Exercise 5 – Loop with Calculation
// Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.11
// What the program does: The program calculates the sum of all even integers from 1 to 100 and then prints the result.
// Concepts used: for loop, accumulator pattern, compound assignment operator (+=), custom increment step.
// How it works: The loop starts at i = 1 and runs while i <= 100. After each iteration, i increases by 2 (i += 2). The value of i is accumulated into the sum variable.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i += 2) {
        sum += i;
    }

    printf("Sum of even integers from 1 to 100 is: %d\n", sum);
    return 0;
}
