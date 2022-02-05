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
import java.io.*;
public class Example3
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader fin = null;
		PrintWriter fout = null;
		try
		{
		 	fin = new BufferedReader(new FileReader("test.txt"));
		 	fout = new PrintWriter(new FileWriter("newtest.txt"));
			String ch;
			int i = 0;
			while((ch = fin.readLine()) != null)
			{
				fout.println(++i + " : " + ch);
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
