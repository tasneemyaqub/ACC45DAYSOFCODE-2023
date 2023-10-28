#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, W, X, Y, Z;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &T);        //input number of test cases
        if(T>=1 && T<=10000)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-10000: ");
    } while (flag == false);
    for(i=0; i<T; i++)      //to input t times
    {
        printf("Enter weight of object and three weights: ");
        do      //to re input if weights not in constraints
        {
            scanf("%d%d%d%d", &W, &X, &Y, &Z);        //input weight of object and weights
            if(W>=1 && W<=100000 && X>=1 && X<=100000 && Y>=1 && Y<=100000 && Z>=1 && Z<=100000)       //checking constraints for weights
                break;
            else
                printf("Error! Weights should be from 1 to 100000: ");
        } while (flag == false);
        if(W==X || W==Y || W==Z || W==X+Y || W==X+Z || W==Y+Z || W==X+Y+Z)        //to check all types of weights combinations
            printf("YES\n");
        else
            printf("NO\n");
    }
}
