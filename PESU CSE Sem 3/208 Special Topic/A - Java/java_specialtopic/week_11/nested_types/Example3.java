// local inner class
//	class within a method; no body can use it outside of this method
public class Example3
{
	public static void main(String[] args)
	{
		foo();
	}
	public static void foo()
	{
		class MyBreakfast
		{
			private String name;
			public MyBreakfast(String name) { this.name = name; }
			public void disp() { System.out.println("breakfast : " + name);}
		}
		MyBreakfast mbf = new MyBreakfast("dosa");
		mbf.disp();
	}
}

