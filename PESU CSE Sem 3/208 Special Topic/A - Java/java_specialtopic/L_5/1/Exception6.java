// Exception:

import java.io.*;
import java.util.*;
public class Exception6
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		Scanner myfile  = null;
		try
		{
			System.out.println("calling foo");
			foo();
			System.out.println("called foo");
	
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println(e);
			System.out.println("indexed beyond");
			// Gives the whole history;
			// who called whom; which file; while line
			e.printStackTrace();
		}	
		catch(Exception e)
		{
			System.out.println("catch all handler");
			System.out.println("exception : " + e);
		}
		
		System.out.println("the end");
	}
	private static void foo()
	{
		System.out.println("calling bar");
		bar();
		System.out.println("called bar");
	}
	private static void bar()
	{
		System.out.println("in bar");
		int i;	
		int a[] = {11, 22, 33, 44};
		Scanner scanner = new Scanner(System.in);
		i = scanner.nextInt();
		// ArithmeticException if i == 0
		try
		{
		System.out.println(10/i);
		System.out.println("after diviision");
		System.out.println("elem : " + a[i]);
		System.out.println("after indexing");
		}
		catch(ArithmeticException e)
		{
			System.out.println(e);
		}
		// exception handled everything fine here onwards
		System.out.println("out of bar");
	}
}

// Exception:
// dynamic nature of try
//	local handler
//	stack trace







