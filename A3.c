/*Name          : Eswar Majji
  Date          : 17/03/2022
  Description   : Generating negative fibonacci series
  Input         : Enter a Number : -10
  Output        : Enter a Number : -10
                  0,1,-1,2,-3,5,-8
*/

#include<stdio.h>

int main()

{
    int num1, num2, difference, number;     //declaring variables
    num1 = 0;                               //initialize num1
    num2 = 1;                              //initialize num2
    difference = num1 - num2;             // subraction operation

    printf("Enter a NUmber :" );         //taking number
    scanf("%d", &number);


    if(number < 0)                      // checking number is negative or not
    {
        printf("%d,%d,%d", num1, num2, difference);                     //printing first three numbers
        while(difference <= - ( number ) && difference >= number)       //first condition is difference is less than the posive number , second condition is difference is greater than negative number
        {
            num1 = num2;
            num2 = difference;
            difference = num1 - num2;                                   //allocating past two numbers to num1 and num2, and performing subtraction operation

            if(difference <= - ( number ) && difference >= number)      //to avoid printing extra number
            {
                printf(",%d", difference);
            }
        }
        printf("\n");                                                   //printing new line
    }
    else if(number == 0)                                                //print 0 for 0 input
    {
        printf("0\n");
    }

    else                                                        //printing statement if given number is positive
    {
        printf("Invalid input\n");
    }

    return 0;
}
            

