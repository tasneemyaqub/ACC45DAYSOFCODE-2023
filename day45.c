#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, A, B, C, X;
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
        printf("Enter the rupees three have and cost of netflix subscription: ");
        do      //to re input if rupees and cost not in constraints
        {
            scanf("%d%d%d%d", &A, &B, &C, &X);        //input amount and cost
            if(A>=1 && A<=100 && B>=1 && B<=100 && C>=1 && C<=100 && X>=1 && X<=100)       //checking constraints for amount and cost
                break;
            else
                printf("Error! All values should be from 1 to 100: ");
        } while (flag == false);
        if((A+B)>=X || (A+C)>=X || (B+C)>=X)      //to check if any possibility exist
            printf("Yes\n");
        else
            printf("No\n");
    }
}