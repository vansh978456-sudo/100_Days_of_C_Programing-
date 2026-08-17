//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, total_amount;

    // Accepting inputs from the user
    printf("Enter the Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the Annual Interest Rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the Time period (in years): ");
    scanf("%lf", &time);

    // 1. Calculating Simple Interest
    // Formula: SI = (P * R * T) / 100
    simple_interest = (principal * rate * time) / 100.0;

    // 2. Calculating Compound Interest (Compounded Annually)
    // Formula: Total Amount = P * (1 + R/100)^T
    // Formula: CI = Total Amount - P
    total_amount = principal * pow((1.0 + (rate / 100.0)), time);
    compound_interest = total_amount - principal;

    // Displaying the output formatted to 2 decimal places
    printf("\n--- Results ---\n");
    printf("Simple Interest   = %.2lf\n", simple_interest);
    printf("Compound Interest = %.2lf\n", compound_interest);
    printf("Total Amount (CI) = %.2lf\n", total_amount);

    return 0;
	
}
C:\Program Files\Notepad++>gcc DayQ9_5.c

C:\Program Files\Notepad++>a.exe
Enter the Principal amount: 1
Enter the Annual Interest Rate (in %): 2
Enter the Time period (in years): 1

--- Results ---
Simple Interest   = 0.02
Compound Interest = 0.02
Total Amount (CI) = 1.02

