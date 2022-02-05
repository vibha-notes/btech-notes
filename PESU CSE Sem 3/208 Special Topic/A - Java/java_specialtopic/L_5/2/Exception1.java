// Exception:

import java.io.*;
import java.util.*;
public class Exception1
{
	public static void main(String[] args)
	{
		Scanner myfile  = null;
		try
		{
			myfile = new Scanner(new File("junk1.txt"));
			System.out.println("file opened");
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println(e);
			System.out.println("indexed beyond");
		}	
		catch(IOException e)
		{
			System.out.println("exception : " + e);
		}
		finally
		{
			System.out.println("closing the file if opened");
			if(myfile != null)
			{
				myfile.close();
			}
		}
		System.out.println("the end");
	}
	
}

// Exception:
// try without resource
// file has to be closed explicitly in the finally block









