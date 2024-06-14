import java.util.*;
public class table{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter Number");
        int n=s.nextInt();
        for(int i=0;i<=10;i++)
        {
            System.out.print(n);
            System.out.print(" x ");
            System.out.print(i);
            System.out.print(" = ");
            System.out.println(i*n);
        }
    }
}