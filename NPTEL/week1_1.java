import java.util.*;
import java.io.*;
import java.io.BufferedReader;
import java.io.IOException;

class week1_1{
   /* public static void main(String[] args){
        try{
            int m=50/0;
        }
        catch(ArithmeticException n){
            System.out.println(n);
            try{
                String m="abc";
                int o=Integer.parseInt(m);
            }
            catch(NumberFormatException a){
                System.out.println(a);
                try{
                    int m[]={1};
                    m[4]=5;
                }
                catch(IndexOutOfBoundsException b){
                    System.out.println(b);
                    System.out.println("at the final catch");
                }
            }
        }
        finally{
            System.out.println("in the finally keyword");
        }
        
    }*/
    public static void main(String args[]) throws IOException {
        BufferedReader sc=new BufferedReader(new InputStreamReader(System.in));
        String m;
        m=sc.readLine();
        System.out.println(m);
    }
}