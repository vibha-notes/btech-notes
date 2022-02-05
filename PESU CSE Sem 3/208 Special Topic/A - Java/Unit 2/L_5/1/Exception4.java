// Exception:

import java.io.*;//required for "File" class to be accessed
import java.util.*;
public class Exception4
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		Scanner myfile  = null;
		try
		{
			int a[] = {11, 22, 33, 44};
			int i;
			//with or without an existing file
			myfile = new Scanner(new File("junk1.txt"));
			i = scanner.nextInt();
			// ArithmeticException if i == 0
			System.out.println(10/i);
			System.out.println("hattu");
			System.out.println("elem : " + a[i]);
			System.out.println("ippattu");
		}
		catch(IOException e)
		{
			System.out.println("io error : " + e);
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println(e);
			System.out.println("moovattu");
		}	
		catch(Exception e)
		{
			System.out.println("catch all handler");
			System.out.println("exception : " + e);
		}
		finally
		{
			// put the code which should be always 
			//	executed
			System.out.println("always executed");
			// if file has been opened close it
			if(myfile != null)
			{
				myfile.close();
			}
		}
		System.out.println("nalvattu");
	}
}

// Exception:
// finally block









