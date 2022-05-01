import java.io.FileInputStream;

class me extends Thread{
    public void run(){
        try{
            FileInputStream f=new FileInputStream("prac1.java");
            int i=0;
            while((i=f.read())!=-1){
            System.out.print((char)i);
            Thread.sleep(100);
            }
            f.close();
            }catch(Exception e){}
    }
}

class mine extends Thread{
    public void run(){
        try{
            FileInputStream f=new FileInputStream("me2.java");
            int i=0;
            while((i=f.read())!=-1){
            System.out.print((char)i);
            Thread.sleep(100);
            }
            f.close();
            }catch(Exception e){}
    }
}

class prac1{
    public static void main(String args[]){
        me m=new me();
        mine f=new mine();
        m.start();
        try{
            m.join();
        }catch(Exception e){}
        f.start();
    }
}