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
    scanf("%d %s", &i, str);
    printf("\n You entered : %d:::::%s\n", i, str);

    return 0;

}