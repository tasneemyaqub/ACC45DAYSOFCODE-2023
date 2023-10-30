#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, P, Q, j;
    char turn;
    printf("Enter number of test cases: ");
    do      //to re input if test not in constraints
    {
        scanf("%d", &T);        //input number of test cases
        if(T>=1 && T<=200)       //checking constraints for test cases
            break;
        else
            printf("Error! Test should be within 1-200: ");
    } while (flag == false);
    for(i=0; i<T; i++)      //to input t times
    {
        turn = 'z';
        printf("Enter the score: ");
        do      //to re input if score not in constraints
        {
            scanf("%d%d", &P, &Q);        //input Score
            if(P>=0 && P<=10 && Q>=0 && Q<=10)       //checking constraints for slices
                break;
            else
                printf("Error! Score should be from 0 to 10: ");
        } while (flag == false);
        for(j=0; j<=(P+Q); j+=2)     //loop from 0 to turns played
        {
            if(turn == 'a')     //checks if previous 2 turns was alice
                turn = 'b';
            else
                turn = 'a';
        }
        if(turn == 'a')
            printf("Alice\n");
        else
            printf("Bob\n");
    }
}