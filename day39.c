#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, N, j, count;
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
        printf("Enter number of spooky days left: ");
        do      //to re input if days not in constraints
        {
            scanf("%d", &N);        //input days
            if(N>=1 && N<=1000)       //checking constraints for amount
                break;
            else
                printf("Error! Number of spooky days should be from 1 to 1000: ");
        } while (flag == false);
        if(N>1)     //to check if number of days is more than 1
        {
            if(N<9)     //to check if there is only one tuesday
                printf("1\n");
            else
            {
                count=0;
                while(N>1)      //to count number of tuesdays
                {
                    count++;
                    N-=7;
                }
                printf("%d\n", count);
            }
        }
        else
            printf("0\n");
    }
}