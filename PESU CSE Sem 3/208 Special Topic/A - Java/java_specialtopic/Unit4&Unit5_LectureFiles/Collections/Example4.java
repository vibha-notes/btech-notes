//Example1:remove duplicates using collections
//Example2: Find common elements in given two arrays
import java.util.*;
public class Example5
{
	public static void main(String[] args)
	{
		ArrayList<Integer> a1=new ArrayList<Integer>();
		int [] b1={11,22,33,44,55,66,22,11,11,44,88,99};
		for(int i:b1)
		{
			a1.add(i);
		}
		System.out.println(a1);
		System.out.println(a1.size());
		//ArrayList<Integer> d=removedup(a);
		//System.out.println(d);
		ArrayList<Integer> a2=new ArrayList<Integer>();
		int [] b2={11,22,33,44,55,66,88,99};
		for(int i:b2)
		{
			a2.add(i);
		}
		System.out.println(a2);
		System.out.println(a2.size());
		//ArrayList<Integer> res=findCommon(a1,a2);
		//System.out.println(res);
		a1.addAll(a2);
		System.out.println(a1);
	}
	public static <T> ArrayList<T> findCommon(ArrayList<T> a1,ArrayList<T> a2)
	{
		ArrayList<T> c=new ArrayList<T>();
		for(T i:a1)
		{
			if(a2.contains(i))
				c.add(i);
		}
		return c;
	}
	/*public static <T> ArrayList<T> removedup(ArrayList<T> a)
	{
		ArrayList<T> c=new ArrayList<T>();
		for(T i:a)
		{
			if(!c.contains(i))
				c.add(i);
		}
		return c;
	}*/








}