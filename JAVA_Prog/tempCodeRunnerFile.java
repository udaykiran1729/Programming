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
public class tempCodeRunnerFile
{
    public static void main(String []args)
    {
        box ob=new box(10,20);
        ob.det();
    }
}