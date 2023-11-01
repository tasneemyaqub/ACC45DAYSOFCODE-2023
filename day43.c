#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, N, X, Y;
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
        printf("Enter total number of questions, marks of each question and mrks to achieve: ");
        do      //to re input if questions and marks not in constraints
        {
            scanf("%d%d%d", &N, &X, &Y);        //input questions and marks
            if(N>=1 && N<=10 && X>=1 && X<=10 && Y>=0 && Y<=(N*X))       //checking constraints for questions and marks
                break;
            else
                printf("Error! questions and marks should be from 1 to 10 and required marks should be from 0 to %d: ", (N*X));
        } while (flag == false);
        if(Y%X==0)      //checking if marks can be scored or not
            printf("YES\n");
        else
            printf("NO\n");
    }
}