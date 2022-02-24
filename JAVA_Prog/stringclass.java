import java.util.*;
import java.lang.*;
public class stringclass
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("enter string:");
		String s=sc.nextLine();
		StringBuffer sb=new StringBuffer(s);

		//Append method.
		sb.append("world");
		System.out.println("entered string is: "+sb);

		
		//Insert methods.
		System.out.println("enter string:");
		String s1=sc.nextLine();
		StringBuffer s11=new StringBuffer(s1);
		s11.insert(1,"java");
		System.out.println("after insertion string is: "+s11);
		System.out.println("enter string:");
		String s2=sc.nextLine();
		StringBuffer s22=new StringBuffer(s2);
		s22.replace(1,4,"python");
		System.out.println("after replacing string is: "+s22);


		//Delete methods.
		System.out.println("enter string:");
		String s3=sc.nextLine();
		StringBuffer s33=new StringBuffer(s3);
		s33.delete(1,4);
		System.out.println("string after deleting is: "+s33);


		//Reverse methods.
		System.out.println("enter string:");
		String s4=sc.nextLine();
		StringBuffer s44=new StringBuffer(s4);
		s44.reverse();
		System.out.println("string after reversing is: "+s44);


		//capacity method.
		StringBuffer s55=new StringBuffer();
		System.out.println(s55.capacity());
		s55.append("compiler");
		System.out.println(s55.capacity());
		s55.append("java");
		System.out.println(s55.capacity());
		
	}
}