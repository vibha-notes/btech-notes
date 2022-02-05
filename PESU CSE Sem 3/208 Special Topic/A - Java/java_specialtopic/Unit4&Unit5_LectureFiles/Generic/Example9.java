public class Example9
{
	public static void main(String[] args)
	{
		Demo d=new Demo();
		d.disp("pes");
		d.disp(100);
	}
}
class Demo
{
	<T> void disp(T e)
	{
		System.out.println(e.getClass().getName());
	}
}