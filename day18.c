#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;
    int t, i, x, y, tot;
    printf("Enter number of test cases: ");
    do
    {
        scanf("%d", &t);
        if(t>=1 && t<=100)
            break;
        else
            printf("Error! Range of test cases is 1-100: ");
    } while (flag == false);
    for(i=0; i<t; i++)
    {
        printf("Enter daily goal and number of chocolates chef sold: ");
        do
        {
            scanf("%d%d", &x,&y);
            if(x>=1 && x<=10 && y>=1 && y<=10)
                break;
            else
                printf("Error! Range of goal and chocolate is 1-100: ");
        } while (flag == false);
        tot = x + ((y-x)*2);
        printf("%d", tot);
    }
}