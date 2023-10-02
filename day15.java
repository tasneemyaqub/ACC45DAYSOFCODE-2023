import java.util.Scanner;
class day15
{
    Scanner sc = new Scanner(System.in);
    boolean flag = false;
    static int t;
    int x, y, z;
    public static void main(String[] args)      // calls other methods of class
    {
        day15 ob = new day15();
        ob.test();
        for(int i=0; i<t; i++)      // to input calculate and output t times
        {
            ob.input();
            ob.output();
        }
    }
    void test()
    {
        System.out.print("Enter number of test cases: ");
        while(!flag)        // ensures entry is within range
        {
            t = sc.nextInt();
            if(t>=1 && t<=1000)
                break;
            else
                System.out.print("Error!\nEnter number of tests within 1 to 1000: ");
        }
    }
    void input() {
        System.out.print("Enter absolute value of x, y and z: ");
        while (!flag)        //ensures input is within range
        {
            x = sc.nextInt();
            y = sc.nextInt();
            z = sc.nextInt();
            if(x>=1 && y>=1 && z>=1 && x<=1000 && y<=1000 && z<=1000)
                break;
            else
                System.out.print("Error!\nEnter values from 1 to 1000: ");
        }
    }
    void output()
    {
        if(x+y==z || x+z==y || y+z==x)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}