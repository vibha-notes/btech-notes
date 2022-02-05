//Amonymous
public class Example4
{
	public static void main(String[] args)
	{
		//Sample s=new Sample();
		//s.disp();

		Sample s1=new Sample()
		{
			public void disp()
			{
				System.out.println("In Example4:disp");
			}
		};
		s1.disp();	
		
	}
}
class Sample
{
	public void disp()
	{
		System.out.println("In class : disp");
	}
}