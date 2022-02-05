// Exception:
// non normal
// something unusual
// do not know how to take care of it where it happens
// should inform the user that something unusual has happened
// force the user that he should take care of it
//	if he does not, program should abort
//	otherwise move to a safe state and proceed
//		called graceful degradation

// program has a runtime error; exception
//	ArrayIndexOutOfBoundsException
import java.io.*;
import java.util.*;
public class Client
{
	public static void main(String[] args)
	{
		// we are making an array
		// not exactly the way it is in 'C'
		int a[] = {11, 22, 33, 44};
		System.out.println("elem : " + a[4]);	
		//Scanner scanner = new Scanner(new File("junk.txt"));
	}
}

// Exception:
// There are exceptions which the programmer cannot control
//	opening a file depends on the user's input.
//	programmer would not know what the user may want to input
//	checked exception
// There are exceptions which the programmer can control
//	indexing of an array can be controlled by the programmer
//	unchecked exception


// we must anticipate that something could go wrong or become
//	unusual
// put this code under a try block




// You may want to compare to some extent what happens in C compared to what happens in Java regarding index out of bounds






