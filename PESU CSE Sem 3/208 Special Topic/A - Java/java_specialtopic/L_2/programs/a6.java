//constructors
/*
Java allows objects to initialize themselves
when they are created. This automatic initialization is performed through the use of a
constructor.
A constructor initializes an object immediately upon creation. It has the same name as
the class in which it resides and is syntactically similar to a method. Once defined, the
constructor is automatically called immediately after the object is created, before the new
operator completes. Constructors look a little strange because they have no return type,
not even void. This is because the implicit return type of a class’ constructor is the class type
itself. It is the constructor’s job to initialize the internal state of an object so that the code
creating an instance will have a fully initialized, usable object immediately.
*/

class Box
{
	double width;
	double height;
	double depth;
	
	Box()
	{
		width=0;
		height=0;
		depth=0;
	}
	
	Box(int w,int h,int d)//constructor can take parameters as well
	{
		width=w;
		height=h;
		depth=d;
	}
	
	void disp()
	{
		System.out.println("width: "+width);
		System.out.println("height: "+height);
		System.out.println("depth: "+depth);
	}
	
}

class a6
{
	public static void main(String args[])
	{
		Box b1=new Box();
		Box b2=new Box(10,20,30);
		System.out.println("-------object b1 details------------");
		b1.disp();
		System.out.println("-------object b2 details------------");
		b2.disp();
	}
}