/*
Written by: Ajin Sunny
Purpose: Read inputs from the user 
Date: 10-7-2019

*/


#include <stdio.h>

int main()

{
    char str[100];
    int i;

    printf("Enter a value:  ");
    scanf("%d", &i);
    printf("\n You entered : %d\n", i);

    return 0;

}