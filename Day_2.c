//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt the user to enter two integers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
C:\Windows\System32>cd C:\Program Files\Notepad++

C:\Program Files\Notepad++>gcc Enter_two_no.c

C:\Program Files\Notepad++>a.exe
Hello! Enter two numbers :a=^C
C:\Program Files\Notepad++>gcc Day_3.c

C:\Program Files\Notepad++>a.exe
Enter the first number: 1
Enter the second number: 2
The sum of 1 and 2 is: 3
