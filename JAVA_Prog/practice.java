//import java.util.*;
//import java.lang.reflect.Method;
import java.text.SimpleDateFormat;
import java.util.Date;
//import java.text.*;
class pra_2{
    pra_2(){
        System.out.println("you have entered the class");
    }
    protected void me(int i)
    {
        System.out.println("in protected class"+i);
    }
}
public class practice {
    
    public static void main(String args[])
    {
        Date date=new Date();
        pra_2 pre=new pra_2();
        pre.me(4);
        System.out.println("date is"+date.toString());
        SimpleDateFormat ft=new SimpleDateFormat("E yyyy.MM.dd 'at' hh.mm.ss a zzz");
        System.out.println("current date:"+ft.format(date));
        
    }
}
