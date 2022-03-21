/*Name          : Eswar Majji
  Date          : 19/03/2022
  Description   : generating AP,GP,HP series
  Input         : ./progression.c
  Output        : Enter the First Number'A': 2
                  Enter the Common Difference / Ratio'R': 3
                  Enter the number of terms'N': 4
                  AP = 2,5,8,11
                  GP = 2,6,18,54
                  HP = 0.500000,0.200000,0.125000,0.090909

*/
//To generate AP,GP,HP series
#include<stdio.h>

int main()

{
    //declaring variables
    int sum,product,A,R,N,i;
    
    //printing stataments and taking the inputs
    printf("Enter the First Number'A': ");
    scanf("%d", &A);

    printf("Enter the Common Difference / Ratio'R': ");
    scanf("%d", &R);

    printf("Enter the number of terms'N': ");
    scanf("%d", &N);
    
    // code executes only if number of terms must be greater than 0
    if(N > 0)
    {
        //to print AP
        //to avoid repeatation of first term printing outside of loop
        //loop starts with 2nd term
        sum = A;
        printf("AP = %d", A);

        for(i = 2; i <= N; i++)
        {
            sum = sum + R;
            printf(",%d", sum);
        }
        printf("\n");
        

        //to print GP
        //to avoid first term repeatation printing 1st term at outside of loop
        //loop starts with i = 2
        
        product = A;
        printf("GP = %d", A);

        for(i = 2; i <= N; i++)
        {
            product = product * R;
            printf(",%d", product);
        }
        printf("\n");

        //to print HP
        //findinng AP and reciprocating for each term
        //type casting while finding reaciprocal to get decimal
        
        sum = A;
        printf("HP = %f", ( 1 / (float) A ));
        
        for(i = 2; i <= N; i++)
        {
            sum = sum + R;
            printf(",%f", ( 1 / (float) sum ));
        }
        printf("\n");
    }
    //if given N value is negative
    //printing invalid statemant
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}
