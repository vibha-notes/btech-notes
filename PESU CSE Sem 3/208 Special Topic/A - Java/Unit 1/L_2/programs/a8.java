//input from user

import java.util.Scanner;

class a8
{
	public static void main(String args[])
	{
		Scanner ob=new Scanner(System.in);
		System.out.println("enter int,float,string,char");
		int a=ob.nextInt();
		float b=ob.nextFloat();
		String c=ob.next();
		char d=ob.next().charAt(0);
		System.out.println("a: "+a+"b: "+b+"c: "+c+"d: "+d);
		
	}
}