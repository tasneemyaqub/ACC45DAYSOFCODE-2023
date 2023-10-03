import java.util.Scanner;
class day17
{
    Scanner sc = new Scanner (System.in);
    static int t;
    int n , jar1, jar2, jar3;
    boolean flag = false;
    public static void main(String[] args)      // calls other methods of class
    {
        day17 ob = new day17();     // creating object to call static methods
        ob.test();
        for(int i=0; i <t; i++)     // to input and output t times
        {
            ob.input();
            ob.calculate();
            ob.output();
        }

    }
    void test()     // inputs value of t
    {
        System.out.print("Enter number of test cases: ");
        while(!flag)        // ensure input is within range
        {
            t = sc.nextInt();
            if(t>=1 && t<=100000)
                break;
            else
                System.out.print("Error!\nEnter number of test range within 1 to 10000");
        }
    }
    void input()        // inputs value of n
    {
        System.out.print("Enter number of chocolates: ");
                while(!flag)        // ensures input is within range
                {
                    n = sc.nextInt();
                    if(n>=4 && n<=100000)
                        break;
                    else
                        System.out.print("Error!\nEnter number of chocolates within 4 to 100000: ");
                }
    }
    void calculate()        // calculates the distribution of chocolates
    {
        if(n%2!=0)
        {
            jar1 = 1;       // jar1 has odd chocolates
            jar2 = (n-1)/2;
            jar3 = jar2;
            // jar2 and jar3 has same number of chocolates
        }
        else
        {
            jar1 = 1;
            jar2 = 1;
            // jar1 and jar2 has same number of chocolates
            jar3 = n-2;     // jar3 has odd number of chocolates
        }
    }
    void output()
    {
        System.out.println(jar1 + "," + jar2 + "," + jar3);
    }
}