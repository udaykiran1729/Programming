 import java.util.Scanner;
import java.lang.Math;
class pra{
    public static void main(int args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextLine();
        int b=sc.nextLine();
        int c=sc.nextLine();

/*
        int a=input1;
        int b=input2;
        int c=input3;
*/

        int[] m=new int[4];
        int m1,m2,m3,i=1;
        while(i<=4){
            A ob=new A();

            m1=(int) (a%10);
            m2=(int) (b%10);
            m3=(int) (c%10);
            //System.out.println("a:"+a);
            a=(int) (a/10);
            b=(int) (b/10);
            c=(int) (c/10);
            m[i-1]=ob.largest(m1,m2,m3);
            i++;
        }
        int res=0;
        for (int j=0;j<4;j++){
            res+=m[j]*(Math.pow(10,j));
        }
        System.out.println(res);
        
    }
}
class A{
    public int largest(int a1, int b1,int c1){
        

        int m1=this.max(a1,b1,c1);
        int m2=this.min(a1,b1,c1);
        //System.out.println(m1-m2);
        return (m1-m2);
    }

    public int max(int a,int b,int c){
        int m= a>b?(a>c? a:c):(b>c?b:c);
        //System.out.println(m);
        return m;
    }
    public int min(int a,int b,int c){
        int m= a<b?(a<c? a:c):(b<c?b:c);
        //System.out.println(m);
        return m;
    }
} 
