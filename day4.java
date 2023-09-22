import java.util.Scanner;
class day4
{
    Scanner sc=new Scanner(System.in);
    void main()
    {
        int t=0;
        boolean flag=false;
        System.out.print("Enter the number of test cases: ");
        while(flag==false)
        {
            t=sc.nextInt();
            if(t>=1 && t<=100000)
            break;
            else
            System.out.print("Error!\nEnter the test within 1 to 100000: ");
        }
        for(int i=0; i<t; i++)
        Input();
    }
    void Input()
    {
        int n=0;
        boolean flag=false;
        System.out.print("Enter the total number of hoops: ");
        while(flag==false)
        {
            n=sc.nextInt();
            if(n%2==0)
            System.out.print("Number of hoops should be odd: ");
            else
            {
                if(n>=1 && n<=200000)
                break;
                else
                System.out.print("Error!\nEnter the number of hoops within 1 to 200000: ");
            }
        }
        Output(n);
    }
    void Output(int n)
    {
        System.out.println("The last hoop to be jumped on = " + ((n/2)+1));
    }
}