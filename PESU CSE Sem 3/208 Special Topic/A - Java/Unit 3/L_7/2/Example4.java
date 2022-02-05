// Pascal Triangle
// n = 5
// output expected:
//		        1
//            1    1
//          1   2    1
//        1   3    3    1
//      1   4   6    6    1
//   1    5  10   10    5    1

// data structure:
// jagged array
// 0th row has 1 elem
// 1st row has 2 elem
// so on

public class Example4
{
	public static void main(String[] args)
	{
		int n = 5;
		// n + 1 rows
		int[][] pt = new int[n + 1][];
		for(int i = 0; i <= n; ++i)
		{
			pt[i] = new int[i + 1];
		}
		fill(pt);
		disp(pt);
	}
	public static void disp(int[][] x)
	{
		int i; int j;
		int n = x.length - 1;
		for(i = 0; i <= n; i++)
		{
			int m = x[i].length;
			for(j = 0; j <= (n - m); j++)
			{
				System.out.printf("   ");
			}
			for(j = 0; j < m; j++)
			{
				System.out.printf("%5d ",x[i][j]);
			}
			System.out.println();
		}
	}
	public static void fill(int[][] pt)
	{
		int n = pt.length - 1;
		for(int i = 0; i <= n; i++)
		{
			pt[i][0] = pt[i][i] = 1;
			for(int j = 1; j < i; j++)
			{
				pt[i][j] = pt[i-1][j-1] + pt[i-1][j];
			}
		}
	}
}
