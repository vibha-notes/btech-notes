public class Example7
{
	public static void main(String[] args)
	{
		/*int a=10; //primitive 
		Integer b=new Integer(20); //ref type
		Integer c=30; //c=new Integer(30); //boxing
		int d=c; //unboxing
		*/
		Box<String> b=new Box<String>();
		String s="Java";
		b.put(s);
		String s1=b.get();	 //no casting req
		System.out.println(s1);
		b.disp();
		//no primitive type is allowed, only ref type
		Box<Integer> b1=new Box<>();
		b1.put(100);
		int a=b1.get();
		System.out.println(a);
		b1.disp();
		// String s2=b1.get(); Compile time error
		//System.out.println(s2);
	}
}
class Box<T>
{
	T o;
	public void put(T o)
	{
		this.o=o;
		
	}
	public T get()
	{
		return this.o;
	}
	public void disp()
	{
		System.out.println(o.getClass().getName());
	}
}