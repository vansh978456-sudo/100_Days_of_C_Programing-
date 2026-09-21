/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>

int main() {
    float units;
    float bill = 0.0;

    printf("Enter the number of units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        bill = (100 * 5.0) + ((units - 100) * 7.0);
    } else if (units <= 300) {
        bill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    } else {
        bill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
    }

    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}
/*c:\Program Files\Notepad++>gcc DayQ24_12.c

c:\Program Files\Notepad++>a.exe
Enter the number of units consumed: 200
Total Electricity Bill: Γé╣1200.00*/