/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main() {
    int days;
    double fine = 0;

    printf("Enter the number of late days: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    if (days == 0) {
        printf("No fine. Thank you for returning on time!\n");
    } else if (days <= 5) {
        fine = days * 2;
        printf("Total Fine: ₹%.2lf\n", fine);
    } else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total Fine: ₹%.2lf\n", fine);
    } else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total Fine: ₹%.2lf\n", fine);
    } else {
        printf("Fine Status: Membership Cancelled.\n");
    }

    return 0;
}
/*
c:\Program Files\Notepad++>gcc DayQ23_12.c

c:\Program Files\Notepad++>a.exe
Enter the number of late days: 4
Total Fine: Γé╣8.00*/
