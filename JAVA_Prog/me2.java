import java.io.*;

class gc{
    public int gcd(int a,int b){
        int r=a%b;
        if (r==0){
            return b;
        }
        else{
         return  gcd(b,r);
        }
    }
}

class me2{
    public static void main(String args[]){
        gc g=new gc();
        int m=g.gcd(0,2);
        System.out.println(m);
}
}