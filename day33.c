#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, X, Y, A, B, water;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &T);        //input number of test cases
        if(T>=1 && T<=2000)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-2000: ");
    } while (flag == false);
    for(i=0; i<T; i++)      //to input t times
    {
        printf("Enter initial and required temperature of water: ");
        do      //to re input if temperature not in constraints
        {
            scanf("%d%d", &A, &B);        //input initial and require temperaturre
            if(A>=20 && A<=40 && B>=20 && B<=40)       //checking constraints for temperature
                break;
            else
                printf("Error! temperature should be from 20 to 40 litres: ");
        } while (flag == false);
        printf("Enter amount of hot and cold water: ");
        do      //to re input if amount of water not in constraints
        {
            scanf("%d%d", &X, &Y);        //input amount of hot and cold water
            if(X>=0 && X<=20 && Y>=0 && Y<=20)       //checking constraints for water
                break;
            else
                printf("Error! Amount of water should be from 0 to 20 litres: ");
        } while (flag == false);
        if(A==B)        //to check if initial and required temperature is same
            printf("YES\n");
        else if(A>B)        //to check if initial temperature is more than required
        {
            if((A-B)<=Y)        //to check if cold water is enough to lower temperature
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if(A<B)        //to check if initial temperature is less than required
        {
            if((B-A)<=X)        //to check if hot water is enough to raise temperature
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
