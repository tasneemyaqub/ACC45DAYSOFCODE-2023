import java.util.Scanner;
class day11 {
    static Scanner sc = new Scanner(System.in);
    static int t, i, a, b, c, d, e;
    static boolean flag = false;
    public static void main(String[] args) {
        test();
        for(i=0; i<t; i++)
        {
            input();
            output();
        }
    }

    static void test()
    {
        System.out.print("Enter the number of test cases: ");
        while(!flag)
        {
            t = sc.nextInt();
            if(t >= 1 && t <= 36000)
                break;
            else
                System.out.print("Error!\nEnter number of test within 1 to 36000: ");
        }
    }
    static void input()
    {
        System.out.print("Enter weight of 3 bags: ");
        while(!flag)
        {
            a=sc.nextInt();
            b=sc.nextInt();
            c=sc.nextInt();
            if(a>=1 && b>=1 && c>=1 && a<=10 &&b<=10 && c<=10)
                break;
            else
                System.out.print("Error!\nEnter weight within 1 to 10: ");
        }
        System.out.print("Enter weight of checked in bags: ");
        while(!flag)
        {
            d=sc.nextInt();
            if(d>=15 && d<=20)
                break;
            else
                System.out.print("Error!\nEnter weight within 15 to 20: ");
        }
        System.out.print("Enter weight of bag that can be carried: ");
        while(!flag)
        {
            e=sc.nextInt();
            if(e>=5 && e<=10)
                break;
            else
                System.out.print("Error!\nEnter weight within 5 to 10: ");
        }
    }
    static void output()
    {
        if(a<=e || b<=e || c<=e)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}