import java.io.*;
import java.util.*;
public class Example2
{
	public static void main(String[] args)
	{
		Scanner in=null;
		List<String> cl=new ArrayList<String>();
		try
		{
			String city;String place;
			in=new Scanner(new File("places.txt"));
			while(in.hasNext())
			{
				city=in.next();
				place=in.next();
				//System.out.println(city);	
				if(cl.indexOf(city)==-1)
				{
					cl.add(city);
				}
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
		}
		for(String s:cl)
		{
			System.out.println(s);
		}
	}

}