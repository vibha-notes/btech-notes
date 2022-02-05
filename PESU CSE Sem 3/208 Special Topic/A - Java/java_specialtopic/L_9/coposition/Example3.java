// limitations of inheritance:
//	- only one object of superclass
//	- every method of superclass should be supported by subclass
//	- binding of subclass to superclass at compile time

// room has fans;
// each fan can be of different type
public class Example3
{
	public static void main(String[] args)
	{
		Room r1 = new Room(new Fan());
		Room r2 = new Room(new OrnamentalFan());
		Room r3 = new Room(new ThreeBladeFan());
		Room r4 = new Room(new FourBladeFan());
		r1.rotateFan();
		r2.rotateFan();
		r3.rotateFan();
		r4.rotateFan();

		
	}
}

class Fan
{
	public void startRotation()
	{
		System.out.println("starts rotating");
	}
}
class ThreeBladeFan extends Fan
{
	public void startRotation()
	{
		System.out.println("starts rotating 3 blade fan");
	}
}
class FourBladeFan extends Fan
{
	public void startRotation()
	{
		System.out.println("starts rotating 4 blade fan");
	}
}
class OrnamentalFan extends Fan
{
	public void startRotation()
	{
		System.out.println("starts rotating ornamental fan");
	}
}
// Room has a Fan 
// you can also support multiple fans
class Room 
{
	private Fan fan; // this can be anytype of fan; no committment here
	// has other things like light, clock ...; not shown!
	public Room(Fan fan)
	{
		this.fan = fan;
	}
	public void rotateFan()
	{
		fan.startRotation();
	}
}

