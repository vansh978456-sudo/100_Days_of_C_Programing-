// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Take coefficients as input from the user
    printf("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    // A quadratic equation must have a non-zero leading coefficient (a != 0)
    if (a == 0) {
        printf("Invalid quadratic equation (coefficient 'a' cannot be 0).\n");
        return 1;
    }

    // Calculate the discriminant (b^2 - 4ac)
    discriminant = (b * b) - (4 * a * c);

    // Categorize and calculate roots based on the discriminant
    if (discriminant > 0) {
        // Case 1: Real and Distinct (Different) Roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Root Categorization: Real and Distinct\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } 
    else if (discriminant == 0) {
        // Case 2: Real and Equal Roots
        root1 = root2 = -b / (2 * a);
        
        printf("Root Categorization: Real and Equal\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
    else {
        // Case 3: Complex / Imaginary Roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("Root Categorization: Complex and Distinct\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
C:\Program Files\Notepad++>gcc DayQ17_9.c

C:\Program Files\Notepad++>a.exe
Enter coefficients a, b and c: 2 4 6
Root Categorization: Complex and Distinct
Root 1 = -1.00 + 1.41i
Root 2 = -1.00 - 1.41i