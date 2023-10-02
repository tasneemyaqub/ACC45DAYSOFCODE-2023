import java.util.Scanner;
class day16
{
    Scanner sc = new Scanner(System.in);
    static int t;
    int n;
    boolean flag = false;
    public static void main(String[] args)
    {
        day16 ob = new day16();
        ob.test();
        for(int i=0; i<t; i++)
        {
            ob.input();
        }
    }
    void test()
    {
        System.out.print("Enter number of test cases: ");
        while(!flag)
        {
            t = sc.nextInt();
            if(t>=1 && t<=10)
                break;
            else
                System.out.print("Error!\nEnter number of tests within 1 to 10: ");
        }
    }
    void input()
    {
        System.out.print("Enter value of N: ");
        while(!flag)        // ensure input within range
        {
            n = sc.nextInt();
            if(n>=1 && n<=10000)
                break;
            else
                System.out.print("Error!\nEnter value within 1 to 100000: ");
        }
        int[] a = new int[n];
        System.out.print("Enter height of each mountain: ");
        int c = 0;
        for(int i=0; i<n; i++)      // input heights of mountains
        {
            a[i] = sc.nextInt();
            if(c<a[i])      // to calculate maximum height;
                c = a[i];
        }
        output(c);
    }
    void output(int c)
    {
        System.out.println(c);
    }
}