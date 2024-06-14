import java.util.*;
public class sumofnnum{
    public static void main(String[] args ){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter N to find sum");
        int n =s.nextInt();
        int sum=0;
        for(int i=0;i<=n;i++)
        {
            sum=sum+i;
        }
        System.out.println(sum);

    }
}