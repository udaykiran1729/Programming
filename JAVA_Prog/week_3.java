import java.util.*;
import java.lang.*;

class week_3{
    
    public static void main(String args[]){
        int m,n;
        Scanner sc=new Scanner(System.in);
        m=sc.nextInt();
        n=sc.nextInt();
        int []a=new int[m+n];
        int b[]=new int[n];
        for(int i=0;i<m;i++){
            a[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            b[i]=sc.nextInt();
        }
        week_3 s=new week_3();
        int res[]=s.merge(a,b,m,n);
        
        for(int i=0;i<m+n;i++){
            System.out.print(res[i]+" ");
        }
    }

    public int[] merge(int p[],int q[],int m,int n){
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0){
            if (p[i]>q[j]){
                p[k--]=p[i--];
            }
            else{
                p[k--]=q[j--];
            }
        }
        while(j>=0){
            p[k--]=q[j--];
        }
        return p;
    }
}