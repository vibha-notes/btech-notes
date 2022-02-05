//Static inner class
public class Example2
{
	public static void main(String[] args)
	{
		Outer.Inner o=new Outer.Inner();
		o.show();
	}
}
class Outer
{
	public void disp()
	{
		System.out.println("In Outer in disp");
	}
	static class Inner
	{
		public void show()
		{
			System.out.println("In inner in show");
		}
	}
}