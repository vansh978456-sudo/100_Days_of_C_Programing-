// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
C:\Program Files\Notepad++>gcc DayQ11_6.c

C:\Program Files\Notepad++>a.exe
Enter an integer: 3
3 is an odd number.

C:\Program Files\Notepad++>a.exe
Enter an integer: 2
2 is an even number.
