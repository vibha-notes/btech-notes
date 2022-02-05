// enum:

public class Client
{	
	public static void main(String[] args)
	{
		Books mybook = Books.JAVA;
		mybook.disp();
		for(Books b : Books.values())
		{
			b.disp();
		}
	}
}
