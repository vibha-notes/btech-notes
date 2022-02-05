//Composition:Has -A relationship
abstract class P
{
	abstract void show();
}
class A extends P
{
	void show()
	{
		System.out.println("In show in classA");
	}
	void disp()
	{
		System.out.println("In disp in classA");
	}
}
class B extends P
{
	void show()
	{
		System.out.println("In show in classB");
	}
}
class Example3
{
	/*A a=new A();
	B b=new B();
	public void foo()
	{
		a.show();
		b.show();
	}*/
	P o=null;
	Example3(P o)
	{
		this.o=o;
	}
	public void foo()
	{
		this.o.show();
	}
	
		
	public static void main(String[] args)
	{
		//Example3 e=new Example3();
		//e.foo();
		Example3 e=new Example3(new A());
		e.foo();
		Example3 e1=new Example3(new B());
		e1.foo();
	}
}