#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, N;
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
        printf("Enter number of slices required: ");
        do      //to re input if slices not in constraints
        {
            scanf("%d", &N);        //input Slices
            if(N>=1 && N<=100)       //checking constraints for slices
                break;
            else
                printf("Error! Slices should be from 1 to 100: ");
        } while (flag == false);
        if(N%2==0 || N==1)      //if number of slices are cut end to end there can only be even slices
            printf("Yes\n");
        else
            printf("No\n");
    }
}