public class Inher2
{
	public static void main(String[] args)
	{
		P3D p3d = new P3D();
	}
}


class P2D
{
	private int x;
	private int y;
	public P2D()
	{
		System.out.println("ctor of superclass");
	}
}

// every member of P2D is also in P3D irrespective of access
// a) observe that the call to subclass ctor will in turn call the superclass
//		ctor
//	an object of a class can be initialized by calling its ctor
//	an object of a subclass has an unnamed object of superclass within it

class P3D extends P2D
{
	private int z;
	public P3D()
	{
		System.out.println("ctor of subclass");
	}
}
