//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>

int main() {
    int a, b;

    // Asking for user input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping logic without a third variable
    a = a + b; // Step 1: 'a' now holds the sum of both numbers
    b = a - b; // Step 2: 'b' gets the original value of 'a'
    a = a - b; // Step 3: 'a' gets the original value of 'b'

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
C:\Program Files\Notepad++>gcc DayQ7_4.c

C:\Program Files\Notepad++>a.exe
Enter two integers: 1 2

Before swapping: a = 1, b = 2
After swapping: a = 2, b = 1