// input-output:
//	please check Oracle tutorial
//	streams:
//		bytestreams
//			FileInputStream extends InputStream
//			FileOutputStream extends OutputStream
//	create the input file
//	run the pgm
//	compare the input and the output files
import java.io.*;
public class Example1
{
	public static void main(String[] args) throws IOException
	{
		FileInputStream fin = null;
		FileOutputStream fout = null;
		try
		{
		 	fin = new FileInputStream("test.txt");
		 	fout = new FileOutputStream("newtest.txt");
			int ch;
			while((ch = fin.read()) != -1)
			{
				fout.write(ch);
			}
		}
		catch(IOException e)
		{
			System.out.println(e);
		}
		finally
		{
			if(fin != null)
				fin.close();
			if(fout != null)
				fout.close();

		}

	}
}
