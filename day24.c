#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int t, i, x, y, a, b;
    printf("Enter number of test cases: ");
    do      //to check constraints
    {
        scanf("%d", &t);        //taking test cases input
        if(t>=1 && t<=1000)     //checking constraints
            break;
        else
            printf("Error! Number of test cases should be from 1 to 1000");
    } while (flag == false);
    for(i=0; i<t; i++)      //to take input t number of times
    {
        printf("Enter units of power required to be created and number of years: ");
        do      //to check constraints
        {
            scanf("%d%d", &a, &b);      //taking a and b input
            if(a>=1 && b>=1 && a<=1000 && b<=1000)      //checking constraints
                break;
            else
                printf("Error! Both values should be from 1 to 1000");
        } while (flag == false);
        printf("Enter grams of helium on moon's surface and units of power 1 gram can provide: ");
        do      //to check constraints
        {
            scanf("%d%d", &x, &y);      //taking x and y input
            if(x>=1 && y>=1 && x<=1000 && y<=1000)      //checking constraints
                break;
            else
                printf("Error! Both values should be from 1 to 1000");
        } while (flag == false);
        if((x*y)>=(a*b))        //if fuel extracted is more than required print yes
            printf("yes\n");
        else
            printf("no\n");       //if fueal required is more than extracted then print no
    }
}