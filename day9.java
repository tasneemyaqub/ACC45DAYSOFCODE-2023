import java.util.*;
class day9
{
    Scanner sc=new Scanner(System.in);
    void test()//to input number of test cases
    {
        boolean flag=false;
        int t=0;
        System.out.print("Enter the number of test case: ");
        while(flag==false)//re input according to constraints
        {
            t=sc.nextInt();//input number of tests
            if(t>=1 && t<=1000)//checking constraints
            break;
            else
            System.out.print("Error!\nEnter the test range within 1 to 1000: ");
        }
        for(int i=0; i<t; i++)//to input t times
        input();
    }
    void input()
    {
        boolean flag=false;
        int p=0;
        System.out.print("Enter the value of P: ");
        while(flag==false)
        {
            p=sc.nextInt();
            if(p>=1 && p<=24)
            break;
            else
            System.out.print("Error!\nEnter value of p within 1 to 24: ");
        }
        System.out.print("Enter the amount of work Chef needs to do: ");
        int a[]=new int[5];
        for(int i=0; i<5; i++)
        {
            while(flag==false)
            {
                a[i]=sc.nextInt();
                if(a[i]>=0 && a[i]<=24)
                {
                    a[i]*=p;
                    break;
                }
                else
                System.out.print("Error!\nEnter value of A within 0 to 24: ");
            }
        }
        calculate(a);
    }
    void calculate(int a[])
    {
        int sum=0;
        for(int i=0; i<5; i++)
        sum+=a[i];
        if(sum>5*24)
        System.out.println("YES");
        else
        System.out.println("NO");
    }
}