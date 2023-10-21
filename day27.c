#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking for constraints
    int t, i, n, m, candy;
    printf("Enter number of test cases: ");
    do      //to check for constraints
    {
        scanf("%d", &t);        //input t
        if(t>=1 && t<=1000)     //checking constraints
            break;
        else
            printf("Error! number of test cases should be from 1 to 1000\n");
    } while (flag == false);
    for(i=0; i<t; i++)      //to input t times
    {
        printf("Enter number of candies and friends chef has: ");
        do      //to check for constraints
        {
            scanf("%d%d", &n, &m);      // taking number of candies and number of friends input
            if(n>=1 && n<=1000 && m>=1 && m<=1000)      //checking constraints
                break;
            else
                printf("Error! Number of candies and friends should be from 1 to 1000\n");
        } while (flag == false);
        if(n%m!=0)      //checking for equal distributon
            printf("no\n");
        else
        {
            candy=n/m;      //calculating share of each person
            if(candy%2==0)      //checking each share is even or not
                printf("yes\n");
            else
                printf("no\n");
        }
    }
}