public class Example8
{
	public static void main(String[] args)
	{
		Demo<Integer,String> d=new Demo<Integer,String>(100,"java");
		d.disp();
	}
}
class Demo<T,U>
{
	T o1;
	U o2;
	Demo(T o1,U o2)
	{
		this.o1=o1;
		this.o2=o2;
	}
	public void disp()
	{
		System.out.println(o1.getClass().getName());
		System.out.println(o2.getClass().getName());
	}
}