#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking for constraints
    int t, i, n, x;
    printf("Enter number of test cases: ");
    do      //to check for constraints
    {
        scanf("%d", &t);        //input t
        if(t>=1 && t<=5000)     //checking constraints
            break;
        else
            printf("Error! number of test cases should be from 1 to 5000\n");
    } while (flag == false);
    for(i=0; i<t; i++)
    {
        printf("Enter number of cards on table: ");
        do
        {
            scanf("%d", &n);
            if(n>=2 && n<=100)
                break;
            else
                printf("Error! Number of card should be from 2 to 100\n");
        } while (flag == false);
        printf("Enter number of cards face up: ");
        do
        {
            scanf("%d", &x);
            if(x>=0 && x<=n)
                break;
            else
                printf("Error! Number of face up card should be from 0 to %d\n", n);
        } while (flag == false);
        if(x==0 || x==n)
            printf("%d\n", 0);
        if((n-x)>x && x!=0)
            printf("%d\n", x);
        if((n-x)<=x && x!=n)
            printf("%d\n", (n-x));
    }
}