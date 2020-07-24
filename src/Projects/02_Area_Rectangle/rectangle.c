/*
Written by: Ajin Sunny
Purpose: Variables
Date: 10-7-2019

*/


#include <stdio.h>
#include <stdbool.h>

int main()
{
    //declaring vairables
    double width = 5.5;
    double height = 25.5;
    double area = 0;
    area = width*height;


    // performing calculations
    double perimeter = 0;
    perimeter = 2.0*(height+width);


    //displaying calculations
    printf("\nThe area is:  %.2f\n", area);
    printf("\nThe perimeter is: %.2f\n", perimeter);




    return 0;

}

