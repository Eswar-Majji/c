/*Name          : Eswar Majji
  Date          : 21/03/2022
  Description   : printing trianglr format
  Input         : ./teiangle_pattern.c
  Output        : Enter the number: 4
                  1 2 3 4
                  5   6
                  7 8
                  9
*/

#include<stdio.h>

int main()

{
    //declaring variables
    int number, row, coloumn, N;
    
    //initiazeing number
    number = 1;

    //reading input
    printf("Enter the number: ");
    scanf("%d", &N);

    //nested for loop from 1 to N
    for(row = 1; row <= N; row++)
    {
        for(coloumn = 1; coloumn <= N; coloumn++)
        {

            //to upper side
            if(row == 1)
            {
                printf("%d ", number++);
            }

            //to print vertical side and 3rd side
            else if(coloumn == 1 || ( coloumn - 1 ) == ( N - row ))
            {
                printf("%d ", number++);
            }

            //to print spaces
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
