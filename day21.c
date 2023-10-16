#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;
    int t, i, x, y, choco;
    printf("Enter number of test cases: ");
    do      //to input number of test cases within range
    {
        scanf("%d", &t);
        if(t>=1 && t<=1000)
            break;
        else
            printf("Error! Test range should be within 1-1000");
    } while (flag == false);
    for(i=0; i<t; i++)      //to input t times
    {
        printf("Enter total money chef has and cost of one chocolate: ");
        do      //to input within range
        {
            scanf("%d%d", &x, &y);
            if(x>=1 && x<=100 && y>=1 && y<=100)
                break;
            else
                printf("Error! Amount should be within 1-100");
        } while (flag == false);
        choco = x/y;     //calculate total chocolates chef can buy with x money
        printf("%d", choco);
        printf("\n");
    }
}