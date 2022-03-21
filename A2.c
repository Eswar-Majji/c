/*Name          : Eswar Majji
  Date          : 17/03/2022
  Description   : Generating positive Fibonacci numbers
  Input         :./fibonacci_series
  Output        :Enter a number: 8
                 0, 1, 1, 2, 3, 5, 8
*/

#include<stdio.h>

int main()
{
    int num1, num2, sum, number, i;     //declaring variables
    num1 = 0;                           //initialize num1
    num2 = 1;                           //initialize num2
    sum = num1 + num2;

    printf("Enter a Number: ");         //taking number
    scanf("%d", &number);


    if(number > 0)                      //if number is positive 
    {
        printf("%d,%d,%d", num1, num2, sum);      //printing first three numbers
        
        while(sum < number)                     //printing remaining numbers until sum is eual to or less than number     
        {
            num1 = num2;                        
            num2 = sum;
            sum = num1 + num2;
            
            if(sum <= number)                   
            {
                printf(",%d", sum);
            }
        }
        printf("\n");                           //to print new line
    }
    else if(number == 0)                        //print 0 for 0 input
    {
        printf("0\n");
    }

    else
    {
        printf("Invalid input\n");              //printing the statement if numebr is negative
    }

    return 0;
} 
