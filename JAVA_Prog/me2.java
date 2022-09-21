import java.lang.*;
import java.util.*;

public class me2 extends prac1{
    static Scanner sc=new Scanner(System.in);
    static String user;
    static String pass;

    

    public static void main(String args[]){

        System.out.println("enter the username");
        user=sc.nextLine();
        pass=sc.nextLine();
        me2 m=new me2();
        m.auth(user, pass);

    }
}

}