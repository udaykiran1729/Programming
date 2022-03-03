import java.util.Random;
import java.util.*;
//import static java.lang.System;

class even extends Thread{
	even(int n){
		System.out.println("the square of the number is:"+(n*n));
	}
}

class odd extends Thread{
	odd(int n){
		System.out.println("the cube of the number is:"+(n*n*n));
	}
}

class gen{
	Random x=new Random();
	gen(){try{
	int n=x.nextInt(100);
	if (n%2==0){
		even e=new even(n);
		e.start();
	}
	else{
		odd o=new odd(n);
		o.start();
	}
	System.out.print("wait the your request is being processed...");
	Thread.sleep(2000);
	System.out.println();}
	catch(InterruptedException e){
		System.out.println("you have raised the exception:"+e);
	}}
}

class practice{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int n;
		System.out.println("enter the no of numbers to be generated:");
		n=sc.nextInt();
		for (int i=0;i<n;i++){
			gen ge=new gen();
		}
		System.out.println("end of ythe processes");
	}
}	