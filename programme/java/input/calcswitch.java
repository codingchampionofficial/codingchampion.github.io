import java.util.*;
public class calcswitch{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
             System.out.println("enter first number");
                  int a =s.nextInt();
                               System.out.println("enter second number");
                    int b =s.nextInt();
             System.out.println("Enter choice 1) Add 2) sub 3) mul 4) div");
             int choice =s.nextInt();

             switch(choice){
                case 1:
                 System.out.println(a+b);
                 break;
                case 2:
                 System.out.println(a-b);
                 break;
                case 3:
                 System.out.println(a*b);
                 break;
                case 4:
                 System.out.println(a/b);
                 break;

                default:
                System.out.println("ERROR....");
                break;

             }
        
        
    }


 }
