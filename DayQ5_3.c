//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Ask the user for input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Calculate Celsius to Fahrenheit
    // Note: 9.0 / 5.0 is used instead of 9 / 5 to force floating-point division
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display the result with 2 decimal places
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}
C:\Program Files\Notepad++>gcc DayQ5_3.c

C:\Program Files\Notepad++>a.exe
Enter temperature in Celsius: 25
25.00┬░C is equal to 77.00┬░F
