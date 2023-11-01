#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, C, X, Y;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &T);        //input number of test cases
        if(T>=1 && T<=100)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-100: ");
    } while (flag == false);
    for(i=0; i<T; i++)      //to input t times
    {
        printf("Enter no. of chocolates to gift, no. of chocolates he posses and cost of 1 chocolate: ");
        do      //to re input if chocolates and cost not in constraints
        {
            scanf("%d%d%d", &C, &X, &Y);        //input chocolates and cost
            if(C>=1 && C<=100 && X>=0 && X<=C && Y>=1 && Y<=100)       //checking constraints for chocs and cost
                break;
            else
                printf("Error! No. of chocolates to gift and cost of one chocolate should be from 1 to 100 and no. of chocolates to gift should be from 0 to %d: ", C);
        } while (flag == false);
        printf("%d\n", ((C-X)*Y));        //printing amount of c-x chocolates
    }
}