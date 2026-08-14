// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    double radius, area, circumference;

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Make the radius positive automatically if a negative is entered
    radius = fabs(radius);

    // Perform calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output the results
    printf("Area of the circle: %.4f\n", area);
    printf("Circumference of the circle: %.4f\n", circumference);

    return 0;
}
C:\Program Files\Notepad++>gcc Day_3.c

C:\Program Files\Notepad++>a.exe
Enter the first number: 1
Enter the second number: 2
The sum of 1 and 2 is: 3

C:\Program Files\Notepad++>gcc Day_2.c

C:\Program Files\Notepad++>a.exe
Enter the radius of the circle: 5
Area of the circle: 78.5398
Circumference of the circle: 31.4159 
