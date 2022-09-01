import java.io.InputStream;
import java.util.*;
import java.lang.*;

class pra3{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        String s=sc.nextLine();
        String s1=sc.nextLine();
        String s2=sc.nextLine();
        int c1=0,c2=0;
        for (int i=0;i<s1.length();i++){
            c1=c1+s1.charAt(i)-'a'+1;
        }
        for (int i=0;i<s2.length();i++){
            c2=c2+s2.charAt(i)-'a'+1;
        }
        System.out.println(c1);
        System.out.println(c2);
        if (c1>c2){
            System.out.println(c1);
        }
        else{
            System.out.println(c2);
        }
        sc.close();
    }
}