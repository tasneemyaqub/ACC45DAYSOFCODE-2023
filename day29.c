#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;      //to use when checking constraints
    int T, i, PA, PB, QA, QB;
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
        printf("Enter time instants for P and Q: ");
        do      //to re input if time instants are not in constraints
        {
            scanf("%d%d%d%d", &PA, &PB, &QA, &QB);        //input scores of Alice and Bob
            if(PA>=1 && PA<=100 && PB>=1 && PB<=100 && QA>=1 && QA<=100 && QB>=1 && QB<=100)       //checking constraints for all instants
                break;
            else
                printf("Error! Time instants should be within 1-100: ");
        } while (flag == false);
        if(PA>=PB)       //checking time penalty for p
        {
            if(QA>=QB)       //checking time penalty for Q
            {
                if(PA>QA)       //checking if Q gets better rank
                    printf("Q\n");
                else if(PA==QA)
                    printf("TIE\n");
                else
                    printf("P\n");
            }
            else
            {
                if(PA>QB)       //checking if Q gets better rank
                    printf("Q\n");
                else if(PA==QB)
                    printf("TIE\n");
                else
                    printf("P\n");
            }
        }
        else
        {
            if(QA>=QB)       //checking time penalty for q
            {
                if(PB>QA)       //checking if Q gets better rank
                    printf("Q\n");
                else if(PB==QA)
                    printf("TIE\n");
                else
                    printf("P\n");
            }
            else
            {
                if(PB>QB)       //checking if Q gets better rank
                    printf("Q\n");
                else if(PB==QB)
                    printf("TIE\n");
                else
                    printf("P\n");
            }
        }
    }
}