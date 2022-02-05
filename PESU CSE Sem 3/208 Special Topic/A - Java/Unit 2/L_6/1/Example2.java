// Array Creation

public class Example2
{
	public static void main(String[] args)
	{
		// 1.
		int[] a = new int[5];
		disp(a);
		// 2.
		int [] b = new int[] {1, 2, 3, 4, 5};
		disp(b);
		// 3.
		int[] c = {6, 7, 8, 9, 10};
		disp(c);
		// b & c are exactly same

		// error; cannot specify the size and the elements
		//int [] d = new int[5]{11, 12, 13, 14, 15};
		
		// ok. but not commonly used; looks like 'C'
		int e[] = {16, 17, 18, 19, 20};
		disp(e);
	
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
