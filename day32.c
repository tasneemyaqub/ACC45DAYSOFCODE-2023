#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, X, Y, time;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &T);        //input number of test cases
        if(T>=1 && T<=1000)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-1000: ");
    } while (flag == false);
    for(i=0; i<T; i++)      //to input t times
    {
        printf("Enter location of policeman and location of thief: ");
        do      //to re input if location not in constraints
        {
            scanf("%d%d", &X, &Y);        //input location of police and thief
            if(X>=-100000 && X<=100000 && Y>=-100000 && Y<=100000)       //checking constraints for both locations
                break;
            else
                printf("Error! Location should be from -100000 to 100000: ");
        } while (flag == false);
        time = 0;       //starting time from zero
        if(X<Y)
        {
            while(X!=Y)     //running loop until x==y
            {
                time++;     //increasing pne second every iteration
                X+=2;       //increasing location of police every second
                Y++;        //increasing location of thief every second
            }
        }
        else
        {
            while(X!=Y)     //running loop until x==y
            {
                time++;     //increasing pne second every iteration
                X-=2;       //increasing location of police every second
                Y--;        //increasing location of thief every second
            }
        }
            printf("%d\n", time);       //printing time
    }
}
