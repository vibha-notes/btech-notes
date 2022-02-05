//Local inner class
public class Example3
{
	public static void main(String[] args)
	{
		foo();
		//Sample s=new Sample("xyz"); ??
		//s.disp();
	}
	public static void foo()
	{
		String str="Hello";
		class Sample
		{
			private String name;
			public Sample(String name)
			{
			
				this.name=name;	
			}
			public void disp()
			{
				System.out.println("In sample class disp fn");
			}
		}
		Sample s=new Sample("xyz");
		s.disp();
	
	}
}
