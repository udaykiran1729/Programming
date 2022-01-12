import java.util.*;


class student{
      String name;
      int rno;
      int std;
      void read(){
          Scanner sc=new Scanner(System.in);
          System.out.println("enter the name , roli no and standard:");
          name=sc.nextLine();
          rno=sc.nextInt();
          std=sc.nextInt();
      }
}

class marks extends student{
      
      int[] sub;
      /*String name;
      int rno;
      int std;*/
      marks(){
      this.read();
      /*System.out.println("NAME:"+name);
      this.name=name;
      this.rno=rno;
      this.std=std;*/
      Scanner sc=new Scanner(System.in);
      sub=new int[6];
      for (int i=0;i<6;i++)
      {
            System.out.println("enter the marks of suject-"+i+":");
            sub[i]=sc.nextInt();
      }
     }
}

class disp extends marks
{
     public void display(){
     System.out.println("NAME:"+name);
     System.out.println("ROLL NO:"+rno+"\nSTANDARD:"+std);
     for (int i=0;i<6;i++){
        System.out.println("subject"+i+" marks are:"+sub[i]);
     }
   }
}       


class week_4_2
{
      public static void main(String args[]){
        //marks m=new marks();
        System.out.println("enter the no of students:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        disp d[]=new disp[n];
        /*disp[] d;
        d=new disp[n];*/
        //d=new d[n];
        for (int i=0;i<n;i++){
           d[i]=new disp();
           d[i].display();
        }
    }
}