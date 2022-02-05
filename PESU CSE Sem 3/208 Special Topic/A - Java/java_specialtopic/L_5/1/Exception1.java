// Exception:
//import java.io.*;
import java.util.*;
public class Exception1
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		try
		{
			int a[] = {11, 22, 33, 44};
			int i;
			i = scanner.nextInt();
			System.out.println("hattu");
			System.out.println("elem : " + a[i]);
			System.out.println("ippattu");
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println(e);
			System.out.println("moovattu");
		}	
		System.out.println("nalvattu");
	}
}

// Exception:


// we must anticipate that something could go wrong or become
//	unusual
// put this code under a try block

// to take care of unusual cases, we require handlers
//	catch block(s)








