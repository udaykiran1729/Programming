import java.util.*;
// import java.lang.*;


public class jav_1 {
    

    public static void main(String args[])
    {
        String m="  me as me  ";
        m=m.trim();
        List<String> l=Arrays.asList(m.split(" "));
        System.out.println((l.get(l.size()-1)).length());
        
    }


}
