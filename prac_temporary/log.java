import java.lang.*;
import java.text.Collator;
import java.util.*;
import java.util.stream.Collectors;

public class log{
    public static void main(String args[]){
        List<Integer> m=new ArrayList<Integer>();
        m.add(1);m.add(2);m.add(1);
        System.out.println(Collections.frequency(m, 1));
    }
}

class me extends Thread{
    
    public void run(){
        
            // for(int i=0;i<5;i++){
            //     System.out.println(i+"  "+this.getId());
            //     try{
            //         Thread.sleep(100);
            //     }
            //     catch(Exception e){}
            // }

            try{
                System.out.println(this.getName());
                Thread.sleep(10000);
                
            }
            catch(Exception e){}
        
        
        // System.out.println(this.getId());
    }
}