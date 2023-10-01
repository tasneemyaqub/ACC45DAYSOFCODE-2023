import java.util.Scanner;
class day12
{
    static Scanner sc=new Scanner(System.in);
    static int t, i, x, y;
    static boolean flag=false;
    public static void main(String[] args)
    {
        System.out.print("Enter the number of test cases: ");
        test();
        for(i=-0; i<t; i++)
        {
            input();
            output();
        }
    }
    static void test()
    {
        while(!flag)
        {
            t=sc.nextInt();
            if(t>=1 && t<=1000)
                break;
            else
                System.out.print("Error!\nEnter number of tests within 1 to 1000: ");
        }
    }
    static void input()
    {
        while(!flag)
        {
            System.out.print("Enter number of students in class: ");
            x=sc.nextInt();
            System.out.print("Enter number of chairs chef already has: ");
            y=sc.nextInt();
            if(x>=0 && x<=100 && y>=0 && y<=100)
                break;
            else
                System.out.print("Error!\nEnter number of students and chairs within 1 to 100: ");
        }
    }
    static void output()
    {
        if(x==y || x<y)
            System.out.println(0);
        else
            System.out.println(x-y);
    }
}
