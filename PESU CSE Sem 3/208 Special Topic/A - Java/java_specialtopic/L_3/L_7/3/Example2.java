import java.util.*;
public class Example2
{
	public static void main(String[] args)
	{
		int n;
		String[] names;
		Scanner scanner = new Scanner(System.in);
		System.out.print("enter # of strings : ");
		n = scanner.nextInt();
		names = new String[n];
		read(names, scanner);
		Arrays.sort(names);
		disp(names);
	}
	public static void disp(String[] names)
	{
		for(String s : names)
		{
			System.out.println(s);
		}	
	}
	public static void read(String[] names, Scanner scanner)
	{
		int l = names.length;
		for(int i = 0; i < l; i++)
		{
			names[i] = scanner.next();
		}
	}
}
/*

*/	
