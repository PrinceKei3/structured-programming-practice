// Exercise 7 – Loop with Decision
// Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.10
// What the program does: The program asks the user for 10 exam results (1 for pass, 2 for fail) and then prints total passes, failures, and an instructor bonus message if passes exceed 8.
// Concepts used: for loop, counter variables, if-else decision statements inside loops, logical evaluation.
// How it works: The loop starts at student = 1 and continues while student <= 10. After each iteration, ++student increments the student count. If the result is 1, passes is incremented; otherwise, failures is incremented.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int passes = 0;
    int failures = 0;
    int result = 0;

    for (int student = 1; student <= 10; ++student) {
        printf("Enter result (1 = pass, 2 = fail): ");
        scanf("%d", &result);

        if (result == 1) {
            passes = passes + 1;
        } else {
            failures = failures + 1;
        }
    }

    printf("Passed: %d\n", passes);
    printf("Failed: %d\n", failures);

    if (passes > 8) {
        printf("Bonus to instructor!\n");
    }

    return 0;
}
