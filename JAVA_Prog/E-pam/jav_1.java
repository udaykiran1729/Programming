import java.util.*;
// import java.lang.*;


public class jav_1 {
    

    public static void main(String args[])
    {
        int[] m=new int[]{1,2,4};
        // Collections.min(Arrays.asList(m));
        System.out.println(Collections.min(Arrays.asList(m)));
        Arrays.stream(m).sum();
        Arrays.stream(m).min();
    }


}
