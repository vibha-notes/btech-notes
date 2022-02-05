// Array traversal
// function returning an array
public class Example1
{
	public static void main(String[] args)
	{
		int[] a = {10, 20, 30, 40, 50};
		int[] b = computeSquares(a);
		disp(a);
		disp(b);
	
	}
	public static void disp(int[] x)
	{
		for(int e : x)
		{
			System.out.print(e + "\t");
		}
		System.out.println();
	}
	public static int[] computeSquares(int[] x)
	{
		// show the necessity of allocation
		// show how the size is fixed here
		int[] res = new int[x.length];
		for(int i = 0; i < x.length; i++)
		{
			res[i] = x[i] * x[i];
		}
		return res;
	}
}
