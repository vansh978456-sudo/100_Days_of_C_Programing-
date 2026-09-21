//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main() {
    double cp, sp, amount, percentage;

    printf("Enter Cost Price: ");
    if (scanf("%lf", &cp) != 1 || cp <= 0) {
        printf("Invalid Cost Price.\n");
        return 1;
    }

    printf("Enter Selling Price: ");
    if (scanf("%lf", &sp) != 1 || sp < 0) {
        printf("Invalid Selling Price.\n");
        return 1;
    }

    if (sp > cp) {
        amount = sp - cp;
        percentage = (amount / cp) * 100;
        printf("Profit = %.2lf\n", amount);
        printf("Profit Percentage = %.2lf%%\n", percentage);
    } else if (cp > sp) {
        amount = cp - sp;
        percentage = (amount / cp) * 100;
        printf("Loss = %.2lf\n", amount);
        printf("Loss Percentage = %.2lf%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
/*C:\Program Files\Notepad++>gcc DayQ22_11.c

C:\Program Files\Notepad++>a.exe
Enter Cost Price: 20000
Enter Selling Price: 25000
Profit = 5000.00
Profit Percentage = 25.00%*/
