import java.util.*;

//a parent class of me3 class

public class me2
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the name:");
        String s=sc.nextLine();
        System.out.println("enter ID NO:");
        int id=sc.nextInt();
        System.out.println("enter teh salary:");
        int sal=sc.nextInt();
        me3 e=new me3();
        e.getinf(s,sal,id);
        System.out.println(e.addsal(sal));
    }
}   