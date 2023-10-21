#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints on input
    int t, i, x, y, z, sec;
    printf("Enter the number of test cases: ");
    do      //to check whether t is within range
    {
        scanf("%d", &t);        //input number of test cases
        if(t>=1 && t<=100)      //checking constraints
            break;
        else
            printf("Error! Number of tests should be between 1 to 100");
    } while (flag == false);
    for(i=0; i<t; i++)
    {
        printf("Enter speed of bullet, position of goomba, time mario needs: ");
        do      //to check wether x,y,z is within range
        {
            scanf("%d%d%d", &x, &y, &z);        //input
            if(x>=1 && y>=1 && z>=1 && x<=100 && y<=100 && z<=100 && y%x==0)
            //checking constraints
                break;
            else
                printf("Error! All three values shoud be within 1 to 100 and first value should be divisble by 2nd value");
        } while (flag ==false);
        sec = y/x;      //calculating time required
        if(sec<z)       //if time is less than required then printing wait time
            printf("%d\n", (z-sec));
        else            //if time is equal to or more than required then printing 0
            printf("%d\n", 0);
    }
}