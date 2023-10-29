#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, A1, A2, B1, B2, net_A, net_B;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &T);        //input number of test cases
        if(T>=1 && T<=100)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-100: ");
    } while (flag == false);
    for(i=0; i<T; i++)      //to input t times
    {
        printf("Enter export and import of countries A and B: ");
        do      //to re input if export import not in constraints
        {
            scanf("%d%d%d%d", &A1, &A2, &B1, &B2);        //input export import
            if(A1>=1 && A1<=100 && A2>=1 && A2<=100 && B1>=1 && B1<=100 && B2>=1 && B2<=100)       //checking constraints for export import
                break;
            else
                printf("Error! Slices should be from 1 to 100: ");
        } while (flag == false);
        net_A = A1-A2;      //calculating net export of A
        net_B = B1-B2;      //calculating net export of B
        if((net_A+net_B)<0)     //checking if net import of C is negative
            printf("YES\n");
        else
            printf("NO\n");
    }
}