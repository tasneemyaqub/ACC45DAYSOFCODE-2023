#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, X, Y, fed;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &T);        //input number of test cases
        if(T>=1 && T<=405)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-405: ");
    } while (flag == false);
    for(i=0; i<T; i++)      //to input t times
    {
        printf("Enter number of plates prepared and number of plates each neighbour takes: ");
        do      //to re input if plates not in constraints
        {
            scanf("%d%d", &X, &Y);        //input plates
            if(X>=20 && X<=100 && Y>=1 && Y<=5)       //checking constraints for plates
                break;
            else
                printf("Error! Weights should be from 1 to 100000: ");
        } while (flag == false);
        fed = X/Y;      //calculating number of people that can be fed
        if(fed>20)
            printf("20\n");
        else
            printf("%d\n", fed);
    }
}
