//callbacks

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

public class Example1
{
	public static void main(String[] args)
	{
		Demo d=new Demo();
		Test t=new Test();
		d.fn(t);
		Demo d1=new Demo();
		d1.fn(new Test(){
		public void foo()
		{
			System.out.println("Foo in example class");
		}
		});
	}
}






