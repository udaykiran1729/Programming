import java.util.*;
import java.lang.*;

class practice{
    public static void main(String args[]){
        try{
            System.out.println("enter the length of array:");
            Scanner sc=new Scanner(System.in);
            int l=sc.nextInt();
            if (l<0){
                throw new NegativeArraySizeException();
            }
            else{
                System.out.println("length of array is:"+l);
            }
        }
        catch (NegativeArraySizeException e){
            System.out.println("array index is negative");
            System.out.print("you have raised the error:"+e);
        }
    }
}