// Array traversal
// a) using a for loop
// b) enhanced for loop
//	loop variable is a copy of the element of the array
public class Example5
{
	public static void main(String[] args)
	{
		int[] a = {10, 20, 30, 40, 50};
		addOne(a);
		disp(a);
	
	}
	// this will not work
	public static void addOne(int[] x)
	{
		for(int e : x)
		{
			e = e + 1;
		}
		
	}
	public static void disp(int[] x)
	{
		System.out.println("length : " + x.length);
		for(int i = 0; i < x.length; i++)
		{
			System.out.print(x[i] + "\t");
		}
		System.out.println();
	}
}
