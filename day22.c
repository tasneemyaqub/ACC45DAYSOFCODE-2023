#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag1 = false, flag2 = true;
    int t, i , j, n, m;
    printf("Enter number of test cases: ");
    do      // to input test cases
    {
        scanf("%d", &t);
        if(t>=1 && t<=1000)
            break;
        else
            printf("Error! Test should be within the range of 1 to 1000");
    } while (flag1 == false);
    for(i=0; i<t; i++)      //to input t times
    {
        printf("Enter number of runs required to win and number of overs: ");
        do      //to input runs and overs
        {
            scanf("%d%d", &n, &m);
            if(n>=1 && n<=1000 && m>=1 && m<=100)
                break;
            else
                printf("Error! Test should be within the range of 1 to 1000");
        } while (flag1 == false);
        for(j=0; j<m; j++)      //to calculate runs for each over
        {
            n-=36;      //to keep subtracting from total
            if(n<=0)        //if runs are finished print yes
            {
                printf("yes\n");
                break;
            }
        }
        if(n>0)     //if runs are left print no
            printf("no\n");
    }
}