import java.util.*;
class day7
{
    void main() 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of Test Cases:");
        int T = sc.nextInt();
        int X = 0;
        int Y = 0;
        int res;
        for (int i = 0; i < T; i++)
        {
            System.out.println("Enter the capacity of geyser and bucket respectively:");
            X = sc.nextInt();
            Y = sc.nextInt();
            res = X / (Y * 2);
            System.out.println("Number of people that can take a bath: " + res);
        }
    }
}