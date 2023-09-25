import java.util.*;
class day6
{
    Scanner sc=new Scanner(System.in);
    void test()//to input number of test cases
    {
        boolean flag=false;
        int t=0;
        System.out.print("Enter the number of test case: ");
        while(flag==false)//re input according to constraints
        {
            t=sc.nextInt();//input number of tests
            if(t>=1 && t<=1000)//checking constraints
            break;
            else
            System.out.print("Error!\nEnter the test range within 1 to 1000: ");
        }
        for(int i=0; i<t; i++)//to input t times
        input();
    }
    void input()//to input number of people
    {
        boolean flag=false;
        int pa=0, pb=0, pc=0;
        System.out.print("Enter the number of people living in regions A,B and C respectively: ");
        while(flag==false)
        {
            pa=sc.nextInt();
            pb=sc.nextInt();
            pc=sc.nextInt();
            if(pa>=1 && pb>=1 && pc>=1 && pa<=1000 && pb<=1000 && pc<=1000)
            break;
            else
            System.out.print("Error!\nNumber of people should be within 1 to 1000: ");
        }
        if(pa+pc>pb)
        System.out.println("Maximum number of people invited are: " + (pa+pc));
        else
        System.out.println("Maximum number of people invited are: " + pb);
    }
}