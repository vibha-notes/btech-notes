 // import java.util.*;
public class CallBack1
{
	public static void main(String[] s)
	{
		MyInterface x1 = new MyClass();
		test1(x1);
		MyInterface x2 = new MyInterface() {
			@Override
			public void foo() { System.out.println("new foo"); }
		};
		test1(x2);
		System.out.println("res : " +  test2(
			new Computable() { @Override public int compute(int x, int y) 
				{ return x + y; }}
		, 10, 20));
		System.out.println("res : " +  test2(
			new Computable() { @Override public int compute(int x, int y) 
				{ return x * y; }}
		, 10, 20));
	}
	public static void test1(MyInterface mi)
	{
		mi.foo(); //  we do not know which method will be called
		// MyInterface should support foo
	}
	public static int test2(Computable comp, int x, int y)
	{
		return comp.compute(x, y); //  we do not know which method will be called
	}
}
interface MyInterface
{
	void foo();
}

class MyClass implements MyInterface
{
	@Override
	public void foo()
	{
		System.out.println("foo of MyClass");
	}
}

interface Computable
{
	int compute(int x, int y);
}
