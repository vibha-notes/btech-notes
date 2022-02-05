// discuss Array as  an abstract data type
//	a single name for # of elements
//	may link to concept room numbers in a hotel or a college
//		row houses in places like jayanagar
//	has # of elements
//	may be of the same type
//	no name for each element
//	accessed by an integer - called index
//	lowest number is 0 (lower bound  : 0)
//	size of array fixed at the point of creation
//	java:
//	array is a reference type
//	array reference can be anywhere
//	array is always created on the heap

public class Example1
{
	public static void main(String[] args)
	{
		int[] a; // is an array reference
		// no array at this point
		int b[]; // another array reference
		// cannot specify the size as in 'C'
		// create an array
		a = new int[5];
		// a : reference; refers to an array of 5 int
		// length is an attribute of array; not a method
		// 'C' stupid ; C arrays do not know their size	
		// all elements created on the heap will have
		//	default value based on the type
		System.out.println(a.length); // 5
		// all zeroes
		for(int i = 0; i < a.length; i++)
		{
			System.out.print(a[i] + "\t");
		}
		System.out.println();

		
	}
}
