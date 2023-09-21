import java.util.*;
class DAY3
{
    Scanner sc=new Scanner(System.in);
    void Input()
    {
        boolean flag=false;
        int l=0;
        System.out.print("Enter the length of the track: ");
        while(flag==false)
        {
            l=sc.nextInt();
            if(l>=1 && l<=1000)
            flag=true;
            else
            System.out.println("Error!\nThe length must be between 1 to 1000:");
        }
        flag=false;
        double v1=0.0, v2=0.0;
        System.out.print("Enter the speed of the tortoise and speed of the hare: ");
        while(flag==false)
        {
            v1=sc.nextDouble();
            v2=sc.nextDouble();
            if(v1>v2)
            System.out.print("Error!\nThe speed of the hare cannot be less than that of the tortoise: ");
            else
            {
                if(v1>=1 && v1<=1000 && v2>=1 && v2<=1000)
                flag=true;
                else
                System.out.print("Error!\nThe speed must be between 1 to 1000: ");
            }
        }
        Calculate(l,v1,v2);
    }
    void Calculate(int l, double v1, double v2)
    {
        int tt=(int)Math.ceil(l/v1);
        int th=(int)Math.ceil(l/v2);
        if(tt<th)
        System.out.println("-1");
        else
        {
            if((tt-th)==0 || (tt-th)==1)
            System.out.println("The longest time the hare can wait, while still being able to win is: 0");
            else
            System.out.println("The longest time the hare can wait, while still being able to win is: "+(tt-th));
        }
    }
    void main()
    {
        boolean flag=false;
        int t=0;
        while(flag==false)
        {
            System.out.print("Enter the number of test cases: ");
            t=sc.nextInt();
            if(t>=1 && t<=10000)
            flag=true;
            else
            System.out.println("Error!\nEnter the test within the range of 1 to 2000");
        }
        for(int i=1; i<=t; i++)
        Input();
    }
}