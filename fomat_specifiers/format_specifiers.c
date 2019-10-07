/*
Written by: Ajin Sunny
Purpose: Format Specifiers
Date: 10-7-2019

*/


#include <stdio.h>
#include <stdbool.h>



int main()
{

    int integerValue = 100;
    float floatingValue = 221.98;
    double doubleVar = 7.99e+11;
    char chaVar = 'A';

    bool boolVar = false;

    printf("integer value is = %i\n", integerValue);
    printf("floating value is = %f\n", floatingValue);
    printf("double value is = %e\n", doubleVar);
    printf("double value is = %g\n", doubleVar);
    printf("char value is = %c\n", chaVar);
    printf("boolVar  = %i\n",boolVar);

    return 0;



    
}