// 2 D array
public class Example1
{
	public static void main(String[] args)
	{
		int a[][] = {{1, 2, 3}, {4, 5, 6, 7},
				{8, 9, 10}};
		disp(a);
		disp1(a);
	}
	public static void disp(int[][] x)
	{
		int i; int j;
		for(i = 0; i < x.length; i++)
		{
			for(j = 0; j < x[i].length; j++)
			{
				System.out.print(x[i][j] + "\t");
			}
			System.out.println();
		}
	}
	public static void disp1(int[][] x)
	{
		for(int[] r : x)
		{
			for(int e : r)
			{
				System.out.print(e + "\t");
			}
			System.out.println();
		}
	}
}
