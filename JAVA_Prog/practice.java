import java.util.*;

class practice{
    public static void main(String args[]){
        char[] copyFrom={'j','a','n','n','p','t','e','l','j','a','v','a',};
        char[] copyTo=new char[9];
        System.arraycopy(copyFrom,3,copyTo,0,9);
    }
}