/*
Written by: Ajin Sunny
Purpose: Variables
Date: 11-28-2019

*/


#include<stdio.h>
#include<stdlib.h>

int main()
{

int min = 0;
double min_year = 0.0;
double Years = 0.0;
double Days = 0.0;



printf("Enter the minutes: ");
scanf("%d", &min);

min_year = 60.0*24.0*365.0;
Years = min/min_year;
Days = (min/60.0)/24.0;


printf("%d minutes is approximnately %f years and %f days", min, Years,Days);

return 0;

}
