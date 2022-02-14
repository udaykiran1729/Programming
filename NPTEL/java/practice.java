import java.lang.*;
import java.util.*;
import static java.lang.System.*;
class practice{
    public static void main(String args[]){
        ArrayList <Integer> l=new ArrayList<Integer>();
        int[] a=new int[3];
        Scanner sc=new Scanner(System.in);
        while(sc.hasNextInt()){
            l.add(sc.nextInt());
        }
        for (int i:l){
            out.println(i);
        }

        out.println("\n\n"+l.get(2));
        out.println("the length is"+a.length);
    }
}