public class Inher4
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
	// call ctor of superclass by using the keyword super
	public P3D(int p, int q, int r)
	{
		System.out.println("ctor of subclass");
		super(p, q); // Error: should be the first stmt
		// build the foundation before the super structure!
		z = r;
	}
}
