// Exception:

import java.io.*;
import java.util.*;
public class Exception5
{
	public static void main(String[] args)
	{
		foo();
	}
	private static void foo()
	{
		Scanner scanner = new Scanner(System.in);
		String filename = scanner.next();
		Scanner myfile = new Scanner(new File(filename));
		System.out.println("file opened");
	}
	
}
// compile time error:

//Exception5.java:15: error: unreported exception FileNotFoundException; must be caught or declared to be thrown
//		Scanner myfile = new Scanner(new File(filename));
//		                 ^
//1 error

 

// Exception:
//	checked and unchecked exception

//	there are cases where something becomes unusual
//	program can take care of them
//	ex: index out of bounds in an array
//	- unchecked

//	there are cases where the programmer cannot do anything
//	opening a file; filename provided by the user; 
//	and file not exist
//	either we should take care of such usage or tell the user
//		something catastrophic could happen
//		- like side effects of medicines









