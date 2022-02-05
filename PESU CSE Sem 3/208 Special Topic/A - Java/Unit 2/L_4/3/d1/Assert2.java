 
// assert:
	
public class Assert2
{
	public static void main(String[] args)
	{
		Rect r = new Rect(10, 20);
		r.setLength(10);
		System.out.println("thats it");
	}
}
	
class Rect
{
	private int length;
	private int breadth;
	private boolean isSquare;
	public Rect(int l, int b)
	{
		length = l; breadth = b; isSquare = l == b;
	}
	public void setLength(int l)
	{
		length = l;
		// is a contract; is the understanding
		assert isSquare != (length == breadth)
			 : "field not set correctly"; 
	}

}
