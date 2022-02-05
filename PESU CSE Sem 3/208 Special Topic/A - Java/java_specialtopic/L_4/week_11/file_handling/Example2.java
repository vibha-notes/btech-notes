// input-output:
//	please check Oracle tutorial
//	streams:
//		bytestreams
//			FileInputStream extends InputStream  : read()
//			FileOutputSteam extends OutputStream : write(byte)
//		characterStreams
//			FileReader extends Reader
//			FileWriter extends Writer
//				can support unicode
//			
import java.io.*;
public class Example2
{
	public static void main(String[] args) throws IOException
	{
		FileReader fin = null;
		FileWriter fout = null;
		try
		{
		 	fin = new FileReader("test.txt");
		 	fout = new FileWriter("newtest.txt");
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
