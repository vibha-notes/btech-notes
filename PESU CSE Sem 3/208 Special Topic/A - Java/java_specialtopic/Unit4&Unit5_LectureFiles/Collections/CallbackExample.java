//Example:callback Mechanism
public class Example4
{
	public static void main(String[] args)
	{
		//1st way
		Demo d=new Demo();
		Test t=new Test();
		d.fn(t);
		//2nd way
		Demo d1=new Demo();
		d1.fn(new Test()
		{
			public void foo()
			{
				System.out.println("In main class Example");
			}
		});
		
	}
	
}

interface Sample
{
	public void foo();
}
class Test implements Sample
{
	public void foo()
	{
		System.out.println("foo body");
	}
}
class Demo
{
	public void fn(Sample s)
	{
		s.foo();
	}
}