public class Example1
{
	public static void main(String[] args)
	{
		Rect r= new Rect(20,10);
		System.out.println(r);
		Object o=r;
		System.out.println(o);
	}
}
class Rect //extends Object// this is implied
{
	private double length;
	private double breadth;
	public Rect(double l,double b)
	{
		length=l;
		breadth=b;
	}
	//@Override
	/*public String toString()
	{
		
		return length+":"+breadth;
	}*/
	
}