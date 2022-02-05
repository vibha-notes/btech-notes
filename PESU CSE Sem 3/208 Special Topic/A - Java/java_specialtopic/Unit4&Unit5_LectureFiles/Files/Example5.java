import java.io.*;
import java.util.*;
//DataStream
public class Example5
{
	public static void main(String[] args) throws Exception
	{
		int[] a={10,20,30,40,50};
		String[] s={"pes","college","java","course"};
		DataOutputStream in=null;
		try
		{
			in =new DataOutputStream(new BufferedOutputStream(new FileOutputStream("input.txt")));
			for(int i=0;i<s.length;++i)
			{
					in.writeUTF(s[i]);
					in.writeInt(a[i]);
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
