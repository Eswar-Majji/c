/*Name          : Eswar Majji
  Date          : 21/03/2022
  Description   : printing numbers in x format
  Input         : ./x_pattern.c
  Output        : Enter the number: 4
                  1  4
                   23
                   23
                  1  4
*/
//printing numbers in x format
#include<stdio.h>

//start
int main()
{
    //declaring variables
    int row, coloumn, N;

    //to take N input
    printf("Enter the number: ");
    scanf("%d", &N);

    //Nested for loop to print cross
    for(row = 1; row <= N; row++)
    {
        for(coloumn = 1; coloumn <= N; coloumn++)
        {
            //to print left to right cross
            if(row == coloumn)
            {
                printf("%d", coloumn);
            }

            //to print right to left cross
            else if(( coloumn - 1) == ( N - row ))
            {
                printf("%d", coloumn);
            }
            
            //to print spaces
            else
            {
                printf(" ");
            }
        }
        //to get into next lint
        printf("\n");
    }

    //to terminate program
    return 0;
}
