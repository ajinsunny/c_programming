/*
Written by: Ajin Sunny
Purpose: Enum
Date: 10-7-2019

*/


#include <stdio.h>
#include <stdbool.h>

int main()
{

enum gender {male , female, bisexual, pansexual};

enum gender myGender;

myGender =  male;

enum gender anotherGender = female;

bool isMale = (myGender == anotherGender);




return 0;


}