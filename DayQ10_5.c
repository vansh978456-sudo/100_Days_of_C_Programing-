//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Prompt the user for input
    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) != 1 || total_seconds < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }


    hours = total_seconds / 3600;          
    minutes = (total_seconds % 3600) / 60;  
    seconds = total_seconds % 60;          

 
    printf("Formatted time -> %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

C:\Windows\System32>cd C:\Program Files\Notepad++

C:\Program Files\Notepad++>gcc DayQ10_5.c

C:\Program Files\Notepad++>a.exe
Enter time in seconds: 60
Formatted time -> 00:01:00