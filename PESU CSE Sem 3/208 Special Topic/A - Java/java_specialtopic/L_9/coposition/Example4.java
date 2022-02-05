// line and points
public class Example4
{
	public static void main(String[] args)
	{
		// line has two points
		Line l = new Line(3, 4, 5, 6);
		l.dispOne();  
		l.dispTwo();  
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
// both points by embedding	
class Line 
{
	private Point one;
	private Point two;
	public Line(int x1, int y1, int x2, int y2)
	{
		one = new Point(x1, y1);
		two = new Point(x2, y2);
	}
	public void dispOne()
	{
		one.disp();
	}
	public void dispTwo()
	{
		two.disp();
	}

	
}

