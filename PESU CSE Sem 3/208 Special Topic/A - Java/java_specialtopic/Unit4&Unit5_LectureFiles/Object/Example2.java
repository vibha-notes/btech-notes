public class Example2
{
	public static void main(String[] args)
	{
		//Ref Semantics
		Rect r1=new Rect(20,10);
		Rect r2=r1;
		System.out.println("r1==r2 "+(r1==r2));
		Rect r3=new Rect(20,10);
		System.out.println("r1==r3 "+(r1==r3));
		Rect r4=new Rect(50,20);
		System.out.println("r1==r4 "+(r1==r4));
		//Value Semantics
		System.out.println("r1 equals r2 "+r1.equals(r2));
		System.out.println("r1 equals r3 "+r1.equals(r3));
		System.out.println("r1 equals r4 "+r1.equals(r4));
		//hashcode
		System.out.println("hashcode r1 "+r1.hashCode());
		System.out.println("hashcode r2 "+r2.hashCode());
		System.out.println("hashcode r3 "+r3.hashCode());
		System.out.println("hashcode r4 "+r4.hashCode());
		
	}
}
class Rect
{
	private double length;
	private double breadth;
	public Rect(double l,double b)
	{
		length=l;
		breadth=b;
	}
	@Override
	public boolean equals(Object o)
	{
		boolean res=false;
		if(o==null || !(o instanceof Rect)) //not same
		{
			return res;
		}
		if(o == this) //same memory
		{
			return true;
		}
		else
		{
			Rect that=(Rect)o;
			res=this.length==that.length && this.breadth==that.breadth;
			return res;
		}
		
	}
	/*
	public int hashCode()
	{
		return (int)(length*breadth);		
	}*/
}
