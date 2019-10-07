/*
Written by: Ajin Sunny
Purpose: Variables
Date: 10-7-2019

*/


#include <stdio.h>
#include <stdbool.h>



int main(int argc, char *argv[])
{

    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d", numberOfArguments);
    printf("Argument 1 is the program name: %s", argument1);
    printf("Argument 2 is the program name: %s", argument2);



    return 0;

}
