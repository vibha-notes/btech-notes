
// searching
import java.util.*;
public class Example3
{
	public static void main(String[] args)
	{
		int[] a = {1, 2, 3, 4, 5};
		Scanner scanner = new Scanner(System.in);
		int e = scanner.nextInt();
		int pos = findElement(a, e);
		if(pos == -1)
		{
			System.out.println("not found");
		}
		else
		{
			System.out.println("found at pos : " + pos);
		}
	
	}

/*
	public static int findElement(int[] x, int e)
	{
		boolean found = false;
		int i; // why here and not in the loop
		for(i = 0; ! found && i < x.length; i++)
		{
			if(x[i] == e)
			{
				found = true;
			}
		}
		if(found)
		{
			return i; // wrong; should be i - 1
		}
		else
		{
			return -1;
		}
	}
*/
//	better way of writing
	public static int findElement(int[] x, int e)
	{
		boolean found = false;
		int pos = -1;
		int i; // why here and not in the loop
		for(i = 0; ! found && i < x.length; i++)
		{
			if(x[i] == e)
			{
				found = true;
				pos = i;
			}
		}
		return pos;
	}
}
