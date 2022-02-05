// Exception:

import java.io.*;
import java.util.*;
public class Exception3
{
	public static void main(String[] args)
	{
		File myfile  = null;
		try
		{
			myfile = new File("junk1.txt");
			if(! myfile.exists())
			{
				throw new IOException("no such file");
			}
		}
		catch(IOException e)
		{
			System.out.println("exception : " + e);
		}

		System.out.println("the end");
	}
	
}

// Exception:
// throwing an exception
//      we can throw a builtin exception or our own exception
//      The second concept is not being covered in this course










