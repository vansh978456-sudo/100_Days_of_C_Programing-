//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    if (scanf("%d", &month) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (month) {
        case 1:
            printf("Month: January\nDays: 31\n");
            break;
        case 2:
            printf("Month: February\nDays: 28 or 29 (Leap Year)\n");
            break;
        case 3:
            printf("Month: March\nDays: 31\n");
            break;
        case 4:
            printf("Month: April\nDays: 30\n");
            break;
        case 5:
            printf("Month: May\nDays: 31\n");
            break;
        case 6:
            printf("Month: June\nDays: 30\n");
            break;
        case 7:
            printf("Month: July\nDays: 31\n");
            break;
        case 8:
            printf("Month: August\nDays: 31\n");
            break;
        case 9:
            printf("Month: September\nDays: 30\n");
            break;
        case 10:
            printf("Month: October\nDays: 31\n");
            break;
        case 11:
            printf("Month: November\nDays: 30\n");
            break;
        case 12:
            printf("Month: December\nDays: 31\n");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }

    return 0;
}
*/C:\Program Files\Notepad++>gcc DayQ21_11.c

C:\Program Files\Notepad++>a.exe
Enter month number (1-12): 11
Month: November
Days: 30*/