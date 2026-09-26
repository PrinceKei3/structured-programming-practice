// Exercise 3 – Decision
// Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16
// What the program does: The program asks the user for two integers and then compares them to output which number is larger or if they are equal.
// Concepts used: Conditional statements (if, else if, else),operators (>, ==), scanf function.
// How it works: Relational operators compare the two integers. The first matching branch executes its corresponding printf statement.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = 0;
    int num2 = 0;

    printf("Enter int one integers: ");
    scanf("%d", &num1);

    printf("Enter int two integers: ");
    scanf("%d",&num2);

    if (num1 > num2) {
        printf("%d is larger.\n", num1);
    } else if (num2 > num1) {
        printf("%d is larger.\n", num2);
    } else {
        printf("These numbers are equal.\n");
    }

    return 0;
}
