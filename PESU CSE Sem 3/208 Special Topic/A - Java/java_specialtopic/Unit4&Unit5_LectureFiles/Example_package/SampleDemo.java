package myExample;
public class SampleDemo implements Sample
{
	public void f1()
	{
		System.out.println("In f1");
	}
	public void f2()
	{
		System.out.println("In f1");
	}
	public static void main(String[] args)
	{
		SampleDemo d=new SampleDemo ();
		d.f2();
	}
}
