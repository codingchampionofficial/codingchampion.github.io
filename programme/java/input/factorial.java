import java.util.*;
public class factorial{
    public static void main(String[] args ){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter Number");
        int n=s.nextInt();
        int fact=1,i;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        System.out.println(fact);

    }
}