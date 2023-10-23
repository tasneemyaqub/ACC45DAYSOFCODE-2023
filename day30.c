#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, X, Y;
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
        printf("Enter current volume and required volume: ");
        do      //to re input if both the volumes not in constraints
        {
            scanf("%d%d", &X, &Y);        //input current and required volume
            if(X>=1 && X<=100 && Y>=1 && Y<=100)       //checking constraints for all volume
                break;
            else
                printf("Error! Volume should be within 1-100: ");
        } while (flag == false);
        if(X<Y)
            printf("%d\n", (Y-X));
        else
            printf("%d\n", (X-Y));
    }
}