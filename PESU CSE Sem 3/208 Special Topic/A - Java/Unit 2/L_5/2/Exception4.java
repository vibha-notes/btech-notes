// Exception:

import java.io.*;
import java.util.*;
public class Exception4
{
	public static void main(String[] args)
	{
		foo();
		System.out.println("in main");
	}
	private static void foo()
	{
		int[] a = {11, 22, 33, 44};
		Scanner scanner = new Scanner(System.in);
		int i = scanner.nextInt();
		// could raise an exception; index out of bounds
		// compiler does not complain
		// unchecked exception
		System.out.println("ele : " + a[i]);
		System.out.println("in foo");
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









