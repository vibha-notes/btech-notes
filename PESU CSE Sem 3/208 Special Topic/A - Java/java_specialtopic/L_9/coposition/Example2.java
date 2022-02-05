// extending provides a single object of superclass in subclass
// what if the subclass requires more than one object?
// if the subclass has more than one object, interface of one 
//	can be accessed directly. Does the reflect the actual condition?

public class Example2
{
	public static void main(String[] args)
	{
		// line has two points
		Line l = new Line(3, 4, 5, 6);
		l.disp(); // which point?
	}
}

class Point
{
	private int x;
	private int y;
	public Point(int x, int y) { this.x = x; this.y = y; }
	public void disp() 
	{ 
		System.out.println("x : " + x);
		System.out.println("y : " + y);
	}
}
// one point by embedding; cannot be directly accessed
// one point by extending! can be accessed
//	
class Line extends Point
{
	private Point other;
	public Line(int x1, int y1, int x2, int y2)
	{
		super(x1, y1);
		other = new Point(x2, y2);
	}
	
}

