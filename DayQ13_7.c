//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include <stdio.h>

int main() {
    int year;

    // Prompt user for input
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1 || year < 0) {
        printf("Error: Please enter a valid positive year.\n");
        return 1;
    }

    // Leap year logic using conditional statements
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
C:\Program Files\Notepad++>gcc DayQ13_7.c

C:\Program Files\Notepad++>a.exe
Enter a year: 2019
2019 is not a leap year.