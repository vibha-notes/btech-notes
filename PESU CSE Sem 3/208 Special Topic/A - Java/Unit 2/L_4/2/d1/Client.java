// enum:
//	far different compared to 'C'
//	is a collection of objects
//	number of objects is fixed
//	cannot create a new object
//	can  have attributes
//	constructor is private
public class Client
{	
	public static void main(String[] args)
	{
	//	Colour c1 = new Colour(); // NO
		Colour c1 = Colour.RED;
		System.out.println(c1);
	//	System.out.println(Colour.values().length); // ok
		for(Colour c : Colour.values())
		{
			System.out.println(c);
		}
	}
}
