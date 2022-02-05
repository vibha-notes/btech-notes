//inner class or member class
public class Example1
{
	public static void main(String[] args)
	{
		Outer o =new Outer();
		o.i=10;
		System.out.println(o.i);
		o.disp();
		//o.j=11; ??
		Outer.Inner o1=o.new Inner();
		o1.j=11;
		System.out.println(o1.j);
	}

}
class Outer
{
	int i;
	void disp()
	{
		System.out.println("in disp");
	}
	class Inner
	{
		int j;
	}
}