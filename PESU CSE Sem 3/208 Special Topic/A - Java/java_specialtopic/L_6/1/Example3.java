// Array traversal
// a) using a for loop
// b) enhanced for loop
//	loop variable is a copy of the element of the array
public class Example3
{
	public static void main(String[] args)
	{
		int[] a = {10, 20, 30, 40, 50};
		System.out.println("sum : " 
			+ findSum(a));
		System.out.println("sum : " 
			+ findSum1(a));
	
	}
	public static int findSum(int[] x)
	{
		int s = 0;
		for(int i = 0; i < x.length; i++)
		{
			s += x[i];
		}
		return s;
	}
	public static int findSum1(int[] x)
	{
		int s = 0;
		for(int e : x)
		{
			s += e;
		}
		return s;
	}
}
