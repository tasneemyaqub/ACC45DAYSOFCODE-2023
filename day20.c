#include <stdio.h>
#include <stdbool.h>
void main()
{
    int t, i, x, y;
    bool flag = false;
    printf("Enter number of test cases: ");
    do
    {
        scanf("%d", &t);
        if(t>=1 && t<=100)
            break;
        else
            printf("Error! Test case range is 1-100");
    } while (flag == false);
    for(i=0; i<t; i++)
    {
        printf("Enter following and follower count: ");
        do
        {
            scanf("%d%d", &x,&y);
            if(x>=1 && y<=100 && y>=1 && y<=100)
                break;
            else
                printf("Error! Test case range is 1-100");
        } while (flag == false);
        if(x>(y*10))
            printf("yes\n");
        else
            printf("no\n");
    }
}