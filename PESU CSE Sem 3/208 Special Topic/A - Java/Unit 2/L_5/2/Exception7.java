// Exception:

import java.io.*;
import java.util.*;
public class Exception7
{
	public static void main(String[] args)
	{
		foo();
	}
	// throws clause not required; taken care here itself
	// medicine is self contained; no side effects!
	private static void foo() 
	{
		Scanner scanner = new Scanner(System.in);
		String filename = scanner.next();
		try
		{
			Scanner myfile = new Scanner(new File(filename));
		}
		catch(Exception e)
		{
			System.out.println(e);
			e.printStackTrace();
		}

		System.out.println("file opened");
	}
	
}




 

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









