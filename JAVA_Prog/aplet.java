import java.util.ArrayList;
import java.util.*;
// import java.util.Collections;
import java.lang.*;

public class aplet {
        public static void main(String args[]){
            int []m={4 ,1 ,3 ,9 ,7};
            int l=5;
            aplet ap=new aplet();
            ap.merge(m, 0, l-1);
            System.out.println(Arrays.toString(m));
        }

        public void merge(int a[],int l,int r){
            aplet ap=new aplet();
            if(l<r){
                int mid=(l+r)/2;
                ap.merge(a,l,mid);
                ap.merge(a,mid+1,r);
                ap.mergesort(a,l,mid,r);
            }
        }
        public void mergesort(int a[],int l,int m,int r){
            int l1=m-l+1,l2=r-m;
            int [] a1=new int[l1];
            int[] a2=new int[l2];
            for(int i=0;i<l1;i++){
                a1[i]=a[l+i];
            }
            for(int i=0;i<l2;i++){
                a2[i]=a[m+1+i];
            }
            int i=0,j=0,k=l;
            while(i<l1 && j<l2){
                if (a1[i]>a2[j]){
                    a[k++]=a2[j++];
                }
                else{
                    a[k++]=a1[i++];
                }
            }
            while(i<l1){
                a[k++]=a1[i++];
            }
            while(j<l2)
                a[k++]=a2[j++];
        }
}
