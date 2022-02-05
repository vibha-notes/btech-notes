public class Example3
{
	public static void main(String[] args)
	{
		Rect r1=new Rect(20,10);
		Rect r2=r1; //one obj two re;shallow copy

		//Rect r3=new Rect(20,10);
		//r3.length=r1.length; //deep copy
		//System.out.println(r3.length);
	
		Rect r4=r1.clone(); 
		System.out.println(r1);	
		System.out.println(r2);	
		System.out.println(r3);	
		System.out.println(r4);	
	}
}
class Rect implements Cloneable
{
	double length;
	double breadth;
	public Rect(double l,double b)
	{
		length=l;
		breadth=b;
	}
	public String toString()
	{
		return length+":"+breadth;
	}
	public Rect clone()
	{
		Rect that=null;
		try
		{
			that=(Rect)super.clone();
		}
		catch(CloneNotSupportedException e)
		{
			System.out.println(e);
		}
		return that;
	}
}