/*
Written by: Ajin Sunny
Purpose: Read inputs from the user (especiaLLY double in this case)
Date: 10-7-2019

*/


#include <stdio.h>

int main()
{
    double x;

    printf("Enter a double value:");
    scanf("%lf", &x);
    printf("\nYour double value is: %lf\n",x);

    return 0;



}