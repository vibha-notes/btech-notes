import java.io.*;
import java.util.*;
public class Example4
{
	public static void main(String[] args) throws Exception
	{
		Scanner in=null;
		try
		{
			in =new Scanner(new BufferedReader(new FileReader("input2.txt")));
			while(in.hasNext())
			{
				System.out.println(in.next());
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		finally
		{
			if(in !=null)
				in.close();
		}
	}
}
