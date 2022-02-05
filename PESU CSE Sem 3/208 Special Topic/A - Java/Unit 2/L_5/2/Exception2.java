// Exception:

import java.io.*;
import java.util.*;
public class Exception2
{
	public static void main(String[] args)
	{
		try(Scanner myfile = new Scanner(new File("junk.txt")))
		{
			
			System.out.println("in try block");
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
		System.out.println("the end");
	}
	
}

// Exception:
// try with resource
// file opened as part of the try 
// will be closed automatically when the block is exited
//	

// cleaner code; readable; guaranteed that the file will be closed







