// Wrong design
// subclass cannot support every method of the superclass
// this is  a clearly a case of composition and not inheritance
public class Example1
{
	public static void main(String[] args)
	{
		Room r = new Room();
		r.startRotation(); // does room rotate?
	}
}

class Fan
{
	public void startRotation()
	{
		System.out.println("starts rotating");
	}
}

class Room extends Fan
{
}

