import java.util.*;
import java.util.stream.Collector;
import java.util.stream.Collectors;


class some{

    public static void main(String args[]) {
        List<Integer> m=Arrays.asList(2,3,4,5);
        // Stream<Integer> n=m.map(n->n*2);
        
        List<Integer> obj=m.stream().map(n->n*2).collect(Collectors.toList());

        System.out.println(obj);
        System.out.println(obj);
        
        // // t1.start();
        // // t2.start();
    }
    
}