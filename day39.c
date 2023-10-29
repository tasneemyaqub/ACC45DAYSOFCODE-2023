#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, X;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &T);        //input number of test cases
        if(T>=1 && T<=1000)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-1000: ");
    } while (flag == false);
    for(i=0; i<T; i++)      //to input t times
    {
        printf("Enter amount chef needs to pay: ");
        do      //to re input if amount not in constraints
        {
            scanf("%d", &X);        //input amount
            if(X>=1 && X<=1000)       //checking constraints for amount
                break;
            else
                printf("Error! Amount to pay should be from 1 to 1000: ");
        } while (flag == false);
        if(X%5==0)      //to check if amount is divisible by 5
        {
            if(X%10==5)     //to check if 5 rupee is required
                printf("%d\n", ((X/10)+1));
            else
                printf("%d\n", (X/10));
        }
        else
            printf("-1\n");
    }
}