import java.util.*;
class DAY2
{
    Scanner sc=new Scanner(System.in);
    void Input()
    {
        boolean flag=false;
        int X=0,Y=0,Z=0;
        System.out.print("Enter the number of 5 rupee coins, 10 rupee coins, and cost of one chocolate: ");
        while(flag==false)
        {
            X=sc.nextInt();
            Y=sc.nextInt();
            Z=sc.nextInt();
            if(X>=1 && X<=1000 && Y>=1 && Y<=1000 && Z>=1 && Z<=1000)
            flag=true;
            else
            System.out.println("Error!\nEnter all three values within the range of 1 to 1000");
        }
        Calculate(X,Y,Z);
    }
    void Calculate(int x, int y, int z)
    {
        int choc=((x*5)+(y*10))/z;
        int remain=((x*5)+(y*10))%z;
        Output(choc,remain);
    }
    void Output(int c, int r)
    {
        if(c==0)
        System.out.println("Chef can not buy any chocolates");
        else
        {
            if(r==0)
            System.out.println("Chef can buy total " +c+ " chocolates leaving him with no money");
            if(r!=0 && r==1)
            System.out.println("Chef can buy total " +c+ " chocolates leaving him with " +r+ " rupee");
            if(r!=0 && r!=1)
            System.out.println("Chef can buy total " +c+ " chocolates leaving him with " +r+ " rupees");
        }
    }
    void main()
    {
        boolean flag=false;
        int t=0;
        System.out.print("Enter the number of test cases: ");
        while(flag==false)
        {
            t=sc.nextInt();
            if(t>=1 && t<=100)
            flag=true;
            else
            System.out.println("Error!\nEnter the test within the range of 1 to 2000");
        }
        for(int i=1; i<=t; i++)
        Input();
    }
}
