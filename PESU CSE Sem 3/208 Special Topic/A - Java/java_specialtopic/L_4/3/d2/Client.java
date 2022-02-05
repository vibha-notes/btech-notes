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
public class Client
{
	public static void main(String[] args)
	{
		
		int a[] = {11, 22, 33, 44};
		System.out.println("elem : " + a[4]);
	}
}

// Exception:
// There are exceptions which the programmer can control
//	indexing of an array can be controlled by the programmer
//	unchecked exception


// we must anticipate that something could go wrong or become
//	unusual
// put this code under a try block




// You may want to compare to some extent what happens in C compared to what happens in Java regarding index out of bounds






