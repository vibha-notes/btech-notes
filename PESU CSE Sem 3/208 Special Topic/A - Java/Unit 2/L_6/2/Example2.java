// Array traversal
// function returning an array
public class Example2
{
	public static void main(String[] args)
	{
		int[] a = {1, 2, 3, 4, 5};
		int[] b = findEvens(a);
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
	// size of the result is not determinable before hand
	public static int[] findEvens(int[] x)
	{
		// create an array as big as x
		int[] temp = new int[x.length];
		int j = 0;
		for(int i = 0; i < x.length; i++)
		{
			if(x[i] % 2 == 0)
			{
				temp[j++] = x[i];
			}
		}
		// # of elem in temp is j
		// create an array of size j
		int[] res = new int[j];
		for(int i = 0; i < j; i++)
		{
			res[i] = temp[i];			
		}
		return res;
		
	}
}
