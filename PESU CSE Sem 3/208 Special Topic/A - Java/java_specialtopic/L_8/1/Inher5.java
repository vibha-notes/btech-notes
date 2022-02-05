public class Inher5
{
	public static void main(String[] args)
	{
		P3D p3d = new P3D(3, 4 ,5);
		p3d.disp();
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
	public void disp()
	{
		System.out.println("x : " + x);
		System.out.println("y : " + y);

	}
}


class P3D extends P2D
{
	private int z;
	public P3D(int p, int q, int r)
	{
		super(p, q); // calls to base class ctor
		z = r;
		System.out.println("ctor of subclass");
	}
	public void disp()
	{
		// this.disp() // will be infinite recursion
		// P2D.disp(); // cannot call method of base class in this fashion
		// compiler thinks disp is a static method
		// this is a way to call the method of superclass if the names clash
		super.disp();
		System.out.println("z : " + z);
	}
}
