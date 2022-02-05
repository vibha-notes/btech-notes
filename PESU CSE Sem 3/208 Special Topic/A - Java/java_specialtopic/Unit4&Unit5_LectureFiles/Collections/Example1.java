import java.util.*;
public class Example1
{
	public static void main(String[] args)
	{
		/*int[] a=new int[4];
		a[0]=10;
		a[1]=20;
		a[5]=50;
		*/
		List<Integer> a=new ArrayList<Integer>();
		a.add(10);
		a.add(20);
		a.add(50);
		//a.add("pes");
		//a.remove(1);
		/*for(int i:a)
		{
			System.out.println(i);
		}*/
		Iterator i=a.iterator();
		while(i.hasNext())
		{
			System.out.println(i.next());
		}
	}
}