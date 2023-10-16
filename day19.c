#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;
    int t, i, x;
    printf("Enter the number of test cases: ");
    do
    {
        scanf("%d", &t);
        if(t>=1 && t<=100)
            break;
        else
            printf("Error! Range of test case is 1-100");
    } while (flag == false);
    for(i=0; i<t; i++)
    {
        printf("Enter battery level of phone: ");
        do
        {
            scanf("%d", &x);
            if(x>=1 && x<=100)
                break;
            else
                printf("Error! Battery percentage should be within 1-100");
        } while (flag == false);
        if(x>15)
            printf("No\n");
        else
            printf("Yes\n");
    }
}