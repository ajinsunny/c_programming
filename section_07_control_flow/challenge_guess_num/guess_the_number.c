/*
Written by: Ajin Sunny
Purpose: Control Flow: Guess the number
Date: 12-17-2019

*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int main()
{

    int guess = 0;
    int numberofguesses;

    time_t t;
    srand((unsigned)time(&t));
    int randNum = rand() % 21;



    printf("%s\n","This is a guessing game");
    printf("%s\n","I have chosen a number between 0 and 20 which you must guess");

    for(numberofguesses = 5; numberofguesses > 0 ; --numberofguesses)
    {
        printf("\nYou have %d tr%s left",numberofguesses, numberofguesses == 1 ? "y":"ies");
        printf("\nEnter a guess:");
        scanf("%d", &guess);

        if (guess == randNum)
        {
            printf("\nCongratulations. You guessed it!\n");
            return 0;    
        }
        else if(guess<0||guess>20)
        {
            printf("I said the number is between 0 and 20 \n.");
        }
        else if(randNum >guess)
        {
            printf("Sorry %d is wrong. My number is greater than that",guess);
        }
        else if(randNum <guess)
        {
            printf("Sorry %d is wrong. My number is less than that",guess);

        }

    }
    printf("\n You have had 5 tries and failed all of them. The number was %d\n", randNum);        

    return 0;

}



