import java.util.Scanner;

public class averageoftwonum {
            public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter First Number");
        float a = sc.nextInt();
        System.out.println("Enter Second Number");
        float b = sc.nextInt();
        System.out.print("Sum is ");
        System.out.println( a+b);
        System.out.print("Average is ");
        System.out.print((a+b)/2);

    }
}
