//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main() {
    int first, second, temp;

    // User input
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    // Display numbers before swapping
    printf("\nBefore swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    // Swapping logic using a third variable
    temp = first;   // Step 1: Copy the value of first to temp
    first = second; // Step 2: Copy the value of second to first
    second = temp;  // Step 3: Copy the value of temp back to second

    // Display numbers after swapping
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    return 0;
}
C:\Program Files\Notepad++>gcc DayQ6_3.c

C:\Program Files\Notepad++>a.exe
Enter first number: 1
Enter second number: 2

Before swapping:
First number = 1
Second number = 2

After swapping:
First number = 2
Second number = 1