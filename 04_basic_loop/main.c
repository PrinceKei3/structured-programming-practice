// Exercise 4 – Basic Loop
// Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.3
// What the program does: The program prints the sequence of numbers from 1 through 10 on a single line.
// Concepts used: for loop,iteration, printf function.
// How it works: The loop starts at i = 1. The condition i <= 10 checks if the loop should continue. After each iteration, ++i increments the loop counter.

#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 1; i <= 10; ++i) {
        printf("%d\n", i);
    }
    return 0;
}
