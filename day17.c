#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool flag = false;
    int t, n;
    printf("Enter number of test case: ");
    while(flag==false)
    {
        scanf("%d", &t);
        if(t>=1 && t<=100)
            break;
        else
            printf("Error!\nEnter number of test cases wihtin 1 to 100: ");
    }
    for(int i=0; i<t; i++)
    {
        printf("Enter seat number: ");
        while(flag==false)
        {
            scanf("%d", &n);
            if(n>=1 && n<=30)
                break;
            else
                printf("Error\nEnter seat number from 1 to 30: ");
        }
        if(n>=1 && n<=10)
            printf("Lower Double\n");
        else if(n>=11 && n<=15)
            printf("Lower Single\n");
        else if(n>=16 && n<=25)
            printf("Upper Double\n");
        else if(n>=26 && n<=30)
            printf("Upper Single\n");
    }
}