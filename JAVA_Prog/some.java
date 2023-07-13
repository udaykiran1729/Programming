import java.util.*;
import java.lang.*;

class some{
  public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    String s="Wipro Tecnologies";
    String m[]=s.split(" ");
    StringBuilder res=new StringBuilder();
    for(String i:m){
      StringBuilder temp=new StringBuilder();
      for (char j:i.toCharArray()){
        // res.append(j);
        temp.insert(0, j);
      }
      res.append(temp+" ");
    }
    System.out.println(res.toString().trim());
  }
}