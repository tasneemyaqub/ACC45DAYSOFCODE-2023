import java.util.Scanner;
class day13
{
    Scanner sc = new Scanner(System.in);
    static int t;
    int a, b;
    boolean flag = false;
    public static void main(String[] args)      // calls other methods in class
    {
        day13 ob = new day13();     // creating object to call nonstatic methods
        ob.test();
        for(int i=0; i<t; i++)      // to input output t times
        {
            ob.input();
            ob.calculate();
        }
    }
    void test()
    {
        System.out.print("Enter number of test cases: ");
        while(!flag)        // to ensure input is within range
        {
            t=sc.nextInt();
            if(t>=1 && t<=1000)     // checks constraints
                break;
            else
                System.out.print("Error!\nEnter number of test cases within 1 to 1000: ");
        }
    }
    void input()
    {
        System.out.print("Enter maximum number of candies Limak and Bob can eat: ");
        while(!flag)        // to ensure output is within range
        {
            a=sc.nextInt();
            b=sc.nextInt();
            if(a>=1 && b>=1 && a<=1000 && b<=1000)      // checks constraints
                break;
            else
                System.out.print("Error!\nEnter amount if candy within 1 to 1000: ");
        }
    }
    void calculate()
    {
        int c1=-1, c2=0, sum1=0, sum2=0;
        boolean limak = false, bob = false;
        while(!limak && !bob)       // loop to calc sum of candies
        {
            c1 += 2;
            sum1 += c1;
            if(sum1>a)      // to check if total candies is less than limit
            {
                limak = true;
                break;
            }
            c2 += 2;
            sum2 += c2;
            if(sum2>b)      // to check if total candies is less than limit
            {
                bob = true;
                break;
            }
        }
        output(limak,bob);
    }
    void output(boolean limak, boolean bob)
    {
        if(limak)
            System.out.println("BOB");
        if(bob)
            System.out.println("LIMAK");
    }
}