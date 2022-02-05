class A
{
	public void show()
	{
		System.out.println("Show() In class A");
	}
	public int foo()
	{
		System.out.println("In foo in class A");
		return 0;
	}
}
class B extends A
{
	public void show()
	{
		System.out.println("Show() In class B");
	}
	public void foo()
	{
		System.out.println("In foo in class B");
	}
}
public class Example1
{
	public static void main(String[] args)
	{
		System.out.println("In main");
		B b=new B();
		b.show();
		b.foo();
		
	}
}