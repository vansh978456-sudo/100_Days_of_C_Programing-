//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>

int main() {
    int number;

    // Prompt the user for input
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }

    // Nested if-else structure
    if (number >= 0) {
        if (number == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } else {
        printf("The number is Negative.\n");
    }

    return 0;
}
C:\Program Files\Notepad++>DayQ12_6.c

C:\Program Files\Notepad++>a.exe
Enter an integer: -1
-1 is an odd number.