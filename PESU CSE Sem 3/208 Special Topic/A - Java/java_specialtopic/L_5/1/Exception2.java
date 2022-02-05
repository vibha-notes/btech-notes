// Exception:

// import java.io.*;
import java.util.*;
public class Exception2
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		try
		{
			int a[] = {11, 22, 33, 44};
			int i;
		
			i = scanner.nextInt();
			System.out.println(10/i);
			System.out.println("hattu");
			System.out.println("elem : " + a[i]);
			System.out.println("ippattu");
		}
		// compile time error; order matters!
		catch(Exception e)
		{
			System.out.println("catch all handler");
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
// order of exception handlers
//	not the best match
//	it is the first match











