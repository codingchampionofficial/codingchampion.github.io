import java.util.Scanner;

public class positiveornegative {
        public static void main(String[] args) {

    Scanner Sc = new Scanner(System.in);
        System.out.print("Enter integer : ");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        if(a>0)
        System.out.print("Positive");

        else if(a<0)
        System.out.println("Negatiive");

        else
        System.out.println("Zero");

    }
    
}
