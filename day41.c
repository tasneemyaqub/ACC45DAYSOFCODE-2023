#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, N, M, discount;
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
        printf("Enter cost of online order and cost of eating at restaurant: ");
        do      //to re input if cost not in constraints
        {
            scanf("%d%d", &N, &M);        //input both costs
            if(N>=1 && N<=1000 && N>=1 && N<=1000)       //checking constraints for cost
                break;
            else
                printf("Error! Slices should be from 1 to 1000: ");
        } while (flag == false);
        discount = N*0.1;       //calculating discount
        N -= discount;      //calculating discounted price
        if(N>M)     //checking which price is greater
            printf("DINING\n");
        else if(N<M)
            printf("ONLINE\n");
        else
            printf("EITHER\n");
    }
}