public class Inher3
{
	public static void main(String[] args)
	{
		P3D p3d = new P3D(3, 4 ,5);
	}
}


class P2D
{
	private int x;
	private int y;
	public P2D(int x, int y)
	{
		System.out.println("ctor of superclass");
		this.x = x;
		this.y = y;
	}
}


class P3D extends P2D
{
	private int z;
	// compile time error:
	// tries to call the default ctor of P2D; which does not exist.
	public P3D(int p, int q, int r)
	{
		System.out.println("ctor of subclass");
	}
}
