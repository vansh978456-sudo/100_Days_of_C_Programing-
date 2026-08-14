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
    float length, breadth, area, perimeter;

    // Step 1: Input dimensions from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Step 2: Calculate area and perimeter using standard formulas
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Step 3: Display the calculated results
    printf("\n--- Results ---\n");
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
C:\Program Files\Notepad++>gcc DayQ1_2.c

C:\Program Files\Notepad++>a.exe
Enter the length of the rectangle: 1
Enter the breadth of the rectangle: 2

--- Results ---
Area of the rectangle: 2.00
Perimeter of the rectangle: 6.00