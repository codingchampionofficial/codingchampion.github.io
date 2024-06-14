import java.util.*;
public class prime{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter Number to check prime or not");
        int n=s.nextInt();
        int count=0;
        for(int i=2;i<=n;i++){
            if((n%i)==0){
                count++;
            }
        }
        if(count==1){
            System.out.println("Prime");
        }
        else{
           System.out.println("Not Prime");
        }

    }
}