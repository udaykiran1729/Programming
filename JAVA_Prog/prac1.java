import java.lang.*;
import java.util.*;

public class prac1{

    protected String m[];
    protected String n[];
    int stage=0;
    prac1(){
        System.out.println("empty fields");
    }

    public void auth(String user,String pass){
        if (user.equals("uday")&&pass.equals("pass")){
            System.out.println("correct credentials");
        }
        else{
            System.out.println("incorrect credentails");
        }
    }

    public void store(String user,String pass){
        m[stage]=user;
        m[stage]=pass;
        stage++;
    }

    public static void main(String[] args){

    }

}
