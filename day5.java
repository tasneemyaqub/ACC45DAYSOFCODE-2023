import java.util.*;
class day5
{
    Scanner sc=new Scanner(System.in);
    void main()//to input the number of test cases
    {
        boolean flag=false;
        int t=0;
        System.out.print("Enter the number of test cases: ");
        while(flag==false)//to re input according to constraints
        {
            t=sc.nextInt();//input test case
            if(t>=1 && t<=1000)
            break;
            else
            System.out.print("Error!\nEnter test range within 1 to 1000: ");
        }
        for(int i=0; i<t; i++)//to input t times
        input();
    }
    void input()//to input number of friends
    {
        boolean flag=false;
        int n=0;
        System.out.print("Enter the number of friends to be seated: ");
        while(flag==false)//to re input according to constraints
        {
            n=sc.nextInt();//input number of friends
            if(n>=2 && n<=1000)
            break;
            else
            System.out.print("Error!\nEnter the number within 2 to 1000: ");
        }
        if(n%4==0)
        System.out.println("The minimum number of cars required = " + n/4);
        else
        System.out.println("The minimum number of cars required = " + ((n/4)+1));
    }
}