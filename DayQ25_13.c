//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    int result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }

    return 0;
}
/*C:\Program Files\Notepad++>gcc DayQ25_13.c

C:\Program Files\Notepad++>a.exe
Enter an operator (+, -, *, /, %): +
Enter two integers: 2 2
Result: 2 + 2 = 4*/