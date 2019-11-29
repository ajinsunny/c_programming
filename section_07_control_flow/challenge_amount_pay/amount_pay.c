
/*
Written by: Ajin Sunny
Purpose: Control Flow: Paystub calculator
Date: 11-29-2019

*/

#include<stdio.h>
#include<stdlib.h>
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25

int main()
{
    int hours = 0;
    double basic_pay_rate = 12.0;
    double gross_pay = 0.0;
    double net_pay = 0.0;
    double overtime_pay = 0.0;
    double taxes = 0.0;

    printf("Enter the number hours worked during the week: ");
    scanf("%d",&hours);
    if(hours <= 40)
    gross_pay = basic_pay_rate*hours;
    else
    {
        hours = hours - 40;
        overtime_pay = basic_pay_rate*hours*1.5;
    }

    gross_pay += overtime_pay;


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
    

    net_pay = gross_pay - taxes;

    //print everything

    printf("Your gross pay this week is: %.2f\n",gross_pay);
    printf("Your taxes this week is: %.2f\n",taxes);
    printf("Your netpay this week is: %.2f\n",net_pay);

    return 0;





    return  0;

}


