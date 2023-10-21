#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int t, i, x, y, moves;
    printf("Enter number of test cases: ");
    do      //to check for constraints
    {
        scanf("%d", &t);
        if(t>=1 && t<=500)
            break;
        else
            printf("Error! Number of tests should be from 1 to 500");
    } while (flag == false);
    for(i=0; i<t; i++)
    {
        printf("Enter number of stair which chef wants to reach and number of stairs he can climb in one move: ");
        do
        {
            scanf("%d%d", &x, &y);
            if(x>=1 && y>=1 && x<=100 && y<=100)
                break;
            else
                printf("Error! both values should be from 1 to 100");
        } while (flag == false);
        moves=x/y;
        if(x%y!=0)
        {
            moves+=(x%y);
            printf("%d\n", moves);
        }
        else
            printf("%d\n", moves);
    }
}