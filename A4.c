/*Name          : Eswar Majji
  Date          : 17/03/2022
  Description   : checking if number is perfect or not
  Input         : ./perfect_number.c
  Output        : Enter a number: 6
                  yes, entered number is perfect number
*/

#include<stdio.h>

int main()

{
    int i, num, sum;        //declaring variables
    sum = 0;                //intialize sum
    
    printf("Enter a Number: ");    //taking number
    scanf("%d", &num);

    if(num > 0)                     //checking number is positive or not
    {
        for(i = 1; i < num; i++)        //checking for perfect divisble numbers
        {
            if((num % i) == 0)      
            {
                sum = sum + i;      //adding those numbers
            }
        }
        
        if(sum == num)              //if number is perfect
        {
            printf("Yes, entered number is perfect number\n");      //priting yes statement
        }
        else        //if not
        {
            printf("No, entered number is not perfect number\n"); //printing no statement
        }
    }
    else
    {
        printf("Error:Invalid Input, Enter only positive number\n");        //priting statemnet for if number is negative
    }
    return 0;
}
