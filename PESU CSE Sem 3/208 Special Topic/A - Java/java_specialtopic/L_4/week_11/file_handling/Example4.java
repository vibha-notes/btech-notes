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
//		Line Oriented IO:
//			provides line functionality over CharacterStreams
//			BufferedReader
//			PrintWriter	
//		Scanner:
//			break input into tokens
import java.io.*;
import java.util.*;
public class Example4
{
	public static void main(String[] args) throws IOException
	{
		Scanner fin = null;
		PrintWriter fout = null;
		try
		{
		 	fin = new Scanner(new BufferedReader(
					new FileReader("test.txt")));
		 	fout = new PrintWriter(new FileWriter("newtest.txt"));
			String s;
			while(fin.hasNext())
			{
				s = fin.next();
				fout.println(s);
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
