import java.util.Scanner;
class day10
{
    Scanner sc=new Scanner(System.in);
    void test()
    {
        boolean flag=false;
        int t=0;
        System.out.print("Enter the number of test cases: ");
        while(flag==false)
        {
            t=sc.nextInt();
            if(t>=1 && t<=4000)
            break;
            else
            System.out.print("Error!\nENter test range within 1 to 4000: ");
        }
        for(int i=0; i<t; i++)
        input();
    }
    void input()
    {
        boolean flag=false;
        int n=0;System.out.print("Enter the length of the array: ");
        while(flag==false)
        {
            n=sc.nextInt();
            if(n>=1 && n<=100000)
            break;
            else
            System.out.print("Error!\nEnter length within 1 to 1000000: ");
        }
        int arr[]=new int[n];
        System.out.print("Enter the elements of the array: ");
        for(int i=0; i<n; i++)
        {
            while(flag==false)
            {
                arr[i]=sc.nextInt();
                if(arr[i]>=1 && arr[i]<=n)
                break;
                else
                System.out.print("Error!\nEnter the value within 1 to " +n+ ": ");
            }
        }
        calculate(arr,n);
    }
    void calculate(int arr[], int n)
    {
        int c1=0, c2=0;
        for(int i=0; i<n; i++)
        {
            c2=0;
            for(int j=0; j<n; j++)
            {
                if(arr[i]==arr[j])
                c2++;
            }
            if(c1<c2)
            {
                c1=c2;
            }
        }
        output(c1,n);
    }
    void output(int c, int n)
    {
        if(c==0)
        System.out.println("Number of operations needed to perform: " +(n-1));
        else
        System.out.println("Number of operations needed to perform: " +(n-c));
    }
}