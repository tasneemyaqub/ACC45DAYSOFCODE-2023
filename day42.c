#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int X, Y, rem;
    printf("Enter total minutes of movie and minutes watched in 2x speed: ");
    do      //to re input if minutes not in constraints
    {
        scanf("%d%d", &X, &Y);        //input minutes
        if(X>=1 && X<=1000 && Y>=1 && Y<=1000 && Y%2==0)       //checking constraints for minutes
            break;
        else
            printf("Error! Minutes should be from 1 to 1000 and watched time should be even: ");
    } while (flag == false);
    rem = X-Y;      //calculating remaining part
    Y /= 2;     //calculating time taken to watch Y
    X = rem + Y;        //total time taken 
    printf("%d", X);
}