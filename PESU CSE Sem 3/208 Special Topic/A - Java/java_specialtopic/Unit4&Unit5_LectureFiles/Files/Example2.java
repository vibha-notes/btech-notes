import java.io.*;
public class Example2
{
	public static void main(String [] args) throws IOException
	{
		FileReader in=null;
		FileWriter out=null;
		try
		{
			in =new FileReader("input1.txt");
			out =new FileWriter("output1.txt");
			int ch;
			while((ch=in.read())!=-1)
			{
				out.write(ch);
			}

			
		}
		catch(IOException e)
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