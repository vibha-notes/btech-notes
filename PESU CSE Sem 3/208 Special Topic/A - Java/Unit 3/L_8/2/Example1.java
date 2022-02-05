// property of substitution
// subclass object when converted to superclass object can access interface
//	of the superclass only
public class Example1
{
	public static void main(String[] args)
	{
		// examine property of substitution
		// we can always replace an object of superclass by an object of subclass
		// upcasting is implicit
		A x = new B();
		//B y = new A(); // error
		// called downcasting; requires an explicit cast; we shall discuss later

		// another variation
		B y1 = new B();
		A x1 = y1;

		//  yet another variation
		foo(y1);
		
		// We can access only the superclass interface.
		// subclass object can also access the interface of the superclass
		y1.methodA();
		y1.methodB();
		x1.methodA();
		// x1.methodB(); // Error
	}
	public static void foo(A a)	
	{
		System.out.println("foo called ");
	}
}
class A
{
	public void methodA() { System.out.println("I am method A"); }
}
class B extends A
{
	public void methodB() { System.out.println("I am method B"); }
}

