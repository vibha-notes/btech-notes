// Exception:

import java.io.*;
import java.util.*;
public class Exception6
{
	public static void main(String[] args)
	{
		try
		{
			foo();
		}
		catch(Exception e)
		{
			System.out.println(e);
			e.printStackTrace();
		}
	}
	// throws clause ; required for checked exception only
	// like mandatory warning in medicine
	private static void foo() throws IOException
	{
		Scanner scanner = new Scanner(System.in);
		String filename = scanner.next();
		Scanner myfile = new Scanner(new File(filename));
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









