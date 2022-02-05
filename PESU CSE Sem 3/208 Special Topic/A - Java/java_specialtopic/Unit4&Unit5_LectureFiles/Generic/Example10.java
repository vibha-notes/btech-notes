//Revise: Callback
public class Example10
{
	public static void main(String[] args)
	{
		Demo d=new Demo();
		Test t=new Test();
		d.fn(t);
		
	}
}
interface Sample
{	
	public void disp();
}

class Test implements Sample
{
	public void disp()
	{
		System.out.println("disp in Test");
	}
}
class Demo
{
	public void fn(Sample S)
	{
		S.disp();
	}
}