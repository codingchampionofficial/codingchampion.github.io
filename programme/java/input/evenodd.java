import java.util.*;
public class evenodd{
    public static void main(String[] args ){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter number");
        int a=s.nextInt();
        if(a%2==0)
        {
            System.out.println("Even");
        }
        else{
            System.out.println("Odd");
        }
    }
}