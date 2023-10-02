import java.util.Scanner;
class day14
{
    Scanner sc = new Scanner(System.in);
    static int t;
    int n, c = 0;
    boolean flag = false;
    public static void main(String[] args)      // calls all the methods of class
    {
        day14 ob = new day14();
        ob.test();
        for(int i=0; i<t; i++)      // input calculate and output t times
        {
            ob.input();
            ob.calculate();
            ob.output();
        }
    }
    void test()
    {
        System.out.print("Enter number of test cases: ");
        while(!flag)        // ensures input is within range
        {
            t = sc.nextInt();
            if(t>=1 && t<=100)      // checking constraints
                break;
            else
                System.out.print("Error!\nEnter number of test within i to 100: ");
        }
    }
    void input()
    {
        System.out.print("Enter a single integer: ");
        while(!flag)        // ensures input is within range
        {
            n = sc.nextInt();
            if(n>=1 && n<=(int)Math.pow(10,9))      // checking constraints
                break;
            else
                System.out.print("Error!\nEnter integer between 1 to 10^9: ");
        }
    }
    void calculate()
    {
        c = 0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(((i+j)%2)!=0)        // to check if sum of both is not even
                    c++;        // calculates frequency of a,b
            }
        }
    }
    void output()
    {
        System.out.println(c);
    }
}