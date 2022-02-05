import java.io.*;
//matching speeds with IOSpeed
public class Example3
{
	public static void main(String[] args)	 throws IOException
	{
		BufferedReader in=null;
		PrintWriter out=null;
		try
		{
			in=new BufferedReader(new FileReader("input2.txt"));
			out=new PrintWriter(new FileWriter("output2.txt"));
			String ch;
			while((ch=in.readLine())!=null)
			{
				out.println(ch);
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		finally
		{
			if(in!=null)
				in.close();
			if(out!=null)
				out.close();
		}
	}
}