#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int t, i, n, x, j, count;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &t);        //input number of test cases
        if(t>=1 && t<=200)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-200: ");
    } while (flag == false);
    for(i=0; i<t; i++)      //to input t times
    {
        count = 0;
        printf("Enter number of people and minimum age to vote: ");
        do      //to re input if number of people and minimum age not in constraints
        {
            scanf("%d%d", &n, &x);        //input number of people and minimum age
            if(n>=1 && n<=100 && x>=1 && x<=100)       //checking constraints for number of people and minimumm age
                break;
            else
                printf("Error! nnumber of people and minimum age to vote should be within 1-100: ");
        } while (flag == false);
        int a[n];
        printf("Enter age of %d people in chefland: ", n);
        for(j=0; j<n; j++)
        {
            do      //to re input if age not in constraints
            {
                scanf("%d", &a[j]);        //input age of people
                if(a[j]>=1 && a[j]<=100)       //checking constraints for age of people
                    break;
                else
                    printf("Error! nnumber of people should be within 1-100: ");
            } while (flag == false);
            if(a[j]>=x)
                count++;
        }
        printf("%d\n", count);
    }
}