import java.util.*;
class day8
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
        int x=0, y=0, n=0, i=1;
        System.out.print("Enter the coins per month for rent and coins for purchasing a cooler: ");
        while(flag==false)
        {
            x=sc.nextInt();
            y=sc.nextInt();
            if(x>=1 && x<=(int)Math.pow(10,9) && y>=1 && y<=(int)Math.pow(10,9))
            break;
            else
            System.out.print("Error!\nEnter coins per month within 1 to 10^9: ");
        }
        while(n<y)
        {
            n=x*i;
            i++;
        }
        System.out.println("Chef can rent the cooler for " + (i-2) + " months");
    }
}