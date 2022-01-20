import java.util.Scanner;

class week1_1{
    public static void main(String [] args){
        Scanner s=new Scanner(System.in);
        double radius= s.nextDouble();
        double perimeter;
        double area;
        //System.out.println(radius);
        if (radius==0)
        {
            System.out.println("please enter non zero positive number");
        }
        else{
        System.out.println(Math.PI*2*radius);
        System.out.println(Math.PI*(Math.pow(radius, 2)));
        }

    }
}