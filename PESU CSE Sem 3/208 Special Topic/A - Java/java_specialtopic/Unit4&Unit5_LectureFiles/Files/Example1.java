//To read the content of one file and write into another file
import java.io.*;
public class Example1
{
	public static void main(String [] args) throws IOException
	{
		FileInputStream in=null;
		FileOutputStream out=null;
		try
		{
			in =new FileInputStream("input.txt");
			out = new FileOutputStream("output.txt");
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