
/*
Written by: Ajin Sunny
Purpose: Control Flow: Paystub calculator
Date: 11-29-2019

*/



#include<stdio.h>
#include<stdlib.h>



//define preprocessor directives 
#define PAY_RATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main()
{
    int hours = 0;
    double gross_pay = 0.0;
    double net_pay = 0.0;
    double taxes = 0.0;

    printf("Enter the number hours worked during the week: ");
    //getting the input 
    scanf("%d",&hours);

    //calculte gross pay 
    if(hours <= 40)
        gross_pay = PAY_RATE*hours;
    else
    {
        gross_pay = PAY_RATE*hours;
        double overTimePay = (hours - 40) * (PAY_RATE * 1.5);
        gross_pay += overTimePay;
    }

    //calculate taxes 

    if(gross_pay<=300)
        taxes = gross_pay * TAXRATE_300;
    else if(gross_pay>300 && gross_pay<=450)
    {
        taxes = 300* TAXRATE_300;
        taxes += (gross_pay-300) * TAXRATE_150;
    }
    else if(gross_pay>450)
    {
        taxes = 300* TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (gross_pay-450)*TAXRATE_REST;

    }
    
    // net pay
    net_pay = gross_pay - taxes;

    //print everything

    printf("Your gross pay this week is: %.2f\n", gross_pay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your netpay this week is: %.2f\n", net_pay);

    return 0;


}


