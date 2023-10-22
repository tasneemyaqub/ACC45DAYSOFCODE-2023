#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int t, i, a, b;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &t);        //input number of test cases
        if(t>=1 && t<=50)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-50: ");
    } while (flag == false);
    for(i=0; i<t; i++)      //to input t times
    {
        printf("Enter score of Alice and Bob: ");
        do      //to re input if scores not in constraints
        {
            scanf("%d%d", &a, &b);        //input scores of Alice and Bob
            if(a>=0 && a<=6 && b>=0 && b<=6)       //checking constraints for both scores
                break;
            else
                printf("Error! Scores should be within 0-6: ");
        } while (flag == false);
        if(a>=b)        //checking if alice's score is more than or equal to bob's
            printf("%d\n", (7-a));      //printing points alice needs to win
        if(a<b)     //checking if bob's score is more than alice's
            printf("%d\n", (7-b));      //printing points bob needs to win
    }
}