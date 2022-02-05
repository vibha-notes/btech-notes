import java.util.*;
public class Example3
{
	public static void main(String[] args)
	{
		List<String> l=new ArrayList<String>();
		String[] s={"apple","orange","guava","pineapple"};
		for(String e:s)
		{
			l.add(e);
		}
		System.out.println(l);
		Collections.sort(l);
		Collections.sort(l,new Comparator<String>()
		{
			public int compare(String o,String r)
			{
				return o.length()-r.length();
			}
		}
		);
		System.out.println(l);
		int res=Collections.binarySearch(l,"mango"); //min , max
		System.out.println(res);
	}
}