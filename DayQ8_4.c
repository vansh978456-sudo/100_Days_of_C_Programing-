//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>

int main() {
    int n;
    int sum;

    // Prompt the user for input
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Calculate sum directly using the mathematical formula
    sum = n * (n + 1) / 2;

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
C:\Program Files\Notepad++>gcc DayQ8_4.c

C:\Program Files\Notepad++>a.exe
Enter a positive integer (n): 1
The sum of the first 1 natural numbers is: 1

