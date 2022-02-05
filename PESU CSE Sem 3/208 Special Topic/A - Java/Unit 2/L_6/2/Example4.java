
// sorting
import java.util.*;
public class Example4
{
	public static void main(String[] args)
	{
		int[] a = {22, 55, 44, 11, 33};
		disp(a);
		mysort(a);
		disp(a);
	}
	public static void disp(int[] x)
	{
		for(int e : x)
		{
			System.out.print(e + "\t");
		}
		System.out.println();
	}
	// bubble sort
	// show the working with a small example
	// then write the program
	public static void mysort(int[] a)
	{
		int l = a.length;
		for(int i = 0; i < l - 1; i++)
		{
			for(int j = 0; j < l - 1 - i; j++)
			{
				if(a[j + 1] < a[j])
				{
					int temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
	}
}
