import java.util.*;

class me<t>{
    t m[];
    me(t m[]){
        this.m=m;
    }
    public void print(int n){
        for (int i=0;i<n;i++){
            System.out.println(m[i]);
        }
    }
}

class pra{
    public static void main(String args[]){
        String s[]={"uday","kiran","thummala"};
        Integer m[]={23,34,45,56,67,78};
        Character c[]={'w','e','r','t'};
        me<Integer> m1=new me<Integer>(m);
        m1.print(6);
        me<String> m2=new me<String>(s);
        m2.print(3);
        me<Character> m3=new me<Character>(c);
        m3.print(4);
    }
}