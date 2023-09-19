import java.util.Scanner;
class ThirstyChef
{
    Scanner sc=new Scanner(System.in);
    void Input()
    {
        System.out.print("Enter the amount of water chef drank: ");
        boolean flag=false;
        while(flag==false)
        {
            int X=sc.nextInt();
            if(X>=1 && X<=4000)
            {
                flag=true;
                Output(X);
            }
            else
            {
                System.out.println("Error!\nEnter the amount within the range of 1 to 4000");
            }
        }
    }
    void Output(int X)
    {
        if(X>=2000)
        System.out.println("YES");
        else
        System.out.println("NO");
    }
    void main()
    {
        boolean flag=false;
        int t=0;
        while(flag==false)
        {
            System.out.print("Enter the number of test cases: ");
            t=sc.nextInt();
            if(t>=1 && t<=2000)
            {
                flag=true;
            }
            else
            {
                System.out.println("Enter the test within the range of 1 to 2000");
            }
        }
        for(int i=1; i<=t; i++)
        {
            Input();
        }
    }
}