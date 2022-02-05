	// polymorphism

public class Example2
{
	public static void main(String[] args)
	{
		// test 1:
		A x1 = new A();
		A x2 = new B();
		x1.foo();
		x2.foo();
	
	}
	public static void test(A a)	
	{
		System.out.println("calling foo ");
		a.foo();
	}
}
class A
{
	public void foo() { System.out.println("I am foo of A"); }
}
class B extends A
{
	public void foo() { System.out.println("I am foo of B"); }
}

