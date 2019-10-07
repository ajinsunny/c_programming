/*
Written by: Ajin Sunny
Purpose: Variables
Date: 10-7-2019

*/


#include <stdio.h>
#include <stdbool.h>


int main()
{


    enum Company {GOOGLE, FACEBOOK, XEROX, EBAY = 11, YAHOO, MICROSOFT};
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("The value of xerox is : %d \n", xerox);
    printf("The value of google is : %d \n", google);
    printf("The value of ebay is : %d \n", ebay);




    return 0;

}
