/*Name          : Eswar Majji
  Date          : 12/03/2022
  Description   :checking if number is odd or even 
  Input         :user@emertxe] ./even_odd
  Output        :Enter the value of 'n' : -2

                 -2 is negative even number
*/
//checking if number is odd or even

#include<stdio.h>   //preprocessor directive

int main()          
{
    //declaring varaibles
    
    int num;

    printf("Enter the value of 'n' : ");
    scanf("%d", &num);
    
    //checking number is greater than 0 or not
    
    if( num > 0 )
    {
        
        //if number is divide with 2 and reminder is 0 then it is even number
        
        if( ( num % 2 ) == 0 )
        {
            printf("%d is positive even number\n", num);
        }
        
        //if reminder is not equal to 0 then it is odd number
        
        else if( ( num % 2 ) != 0)
        {
            printf("%d is positive odd number\n", num);
        }
    }
    
    //checking number is lessthan 0 or not
    
    else if( num < 0 )
    {
        if( ( num % 2 ) == 0 )
        {
            printf("%d is negative even number\n", num);
        }
    
        else if( ( num % 2 ) != 0 )
        {
            printf("%d is negative odd number\n", num);
        }
    }
    
    //if number is equal to zero
    
    else
    {
        printf("%d is neither add nor even\n", num);
    }
    
    return 0;
}
