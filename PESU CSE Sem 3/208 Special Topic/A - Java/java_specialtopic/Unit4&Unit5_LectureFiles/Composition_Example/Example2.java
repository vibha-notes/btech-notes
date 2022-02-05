//composition
class A
{
	public void show()
	{
		System.out.println("In show in class A");
	}
	public int foo()
	{
		System.out.println("In foo in classA");
		return 0;
	}
}
class B
{
	A a=new A();
	public void show()
	{
		System.out.println("In show in class B");
	}
	public void foo()
	{
		System.out.println("In foo in class B");
		a.show();
		a.foo();
	}
}
public class Example2
{
	public static void main(String[] args)
	{
		System.out.println("In main");
		B b=new B();
		b.show();
		b.foo();
		
	}
}