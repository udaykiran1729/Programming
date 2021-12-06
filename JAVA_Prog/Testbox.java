//import java.util.*;
import java.util.*;

class box{
    public double width;
    public double height;
    public double depth;
    static int count;
    box(){
        width=height=0;
        count++;
    }
    box(int x){
        width=height=x;
        count++;
    }
    box(box d){
        width=d.width;
        height=d.height;
        count++;
    }
    box(int w,int h){
        width=w;
        height=h;
    }
    double area(){
        return (width*height);
    }
    void count(){
        System.out.println("count:"+count);
    }
    void det(){
        System.out.println(this.width);
        System.out.println(this.height);
        System.out.println(this.area());
        
    }
}
public class Testbox{
    public static void main(String args[]){
        box b1=new box();
        b1.det(b1);
        box b2=new box();
        b2.det(b2);
        box b3=new box();
        b3.det(b3);
        box b4=new box(b3);
        b4.det(b4);
        System.out.println("count is :"+box.count);
    }
}