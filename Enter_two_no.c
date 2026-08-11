//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include<stdio.h>
int main() 
{
float a,b;
float sum,sub,mul,rem,div;
printf("Hello! Enter two numbers :");
scanf("%f%f",&a,&b);
printf("a=%.2f,b=%.2f",a,b);
sum= a+b;
sub= a-b;
mul= a*b;
div= a/b;
printf("sum=%f,sub=%f,mul=%f,div=%f",sum,sub,mul,div);
return 0;
}