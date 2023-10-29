#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, S, X, Y, Z;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &T);        //input number of test cases
        if(T>=1 && T<=1000)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-405: ");
    } while (flag == false);
    for(i=0; i<T; i++)      //to input t times
    {
        printf("Enter total memory of chef's phone: ");
        do      //to re input if memory not in constraints
        {
            scanf("%d", &S);        //input memory of phone
            if(S>=1 && S<=500)       //checking constraints for memory
                break;
            else
                printf("Error! Memory should be from 1 to 500: ");
        } while (flag == false);
        printf("Enter memory occupied by already installed apps and memory required by third app: ");
        do      //to re input if memory not in constraints
        {
            scanf("%d%d%d", &X, &Y, &Z);        //input memory of apps
            if(X>=1 && X<=S && Y>=1 && Y<=S && X+Y<=S && Z<=S)       //checking constraints for apps' memory
                break;
            else
                printf("Error! Memory of apps should be from 1 to %d andd summation of installed apps cannot be more than %d: ", S, S);
        } while (flag == false);
        if((X+Y+Z)<= S)     //to check if no apps need to be uninstalled
            printf("0\n");
        else if((S-X)>=Z || (S-Y)>=Z)       //to check if one app needs to be installed
            printf("1\n");
        else                //to check if both apps need to be uninstalled
            printf("2\n");
    }
}
