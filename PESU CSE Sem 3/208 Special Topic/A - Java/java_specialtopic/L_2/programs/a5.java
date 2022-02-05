//instance methods
class Box
{
	double width;
	double height;
	double depth;
	void volume()//with zero parametr and returns nothing
	{
		System.out.println("volume is: ");
		System.out.println(width*height*depth);// no need of . operator or separator 
	}
	
	double volume1()
	{
		return width*height*depth;
	}
	
	void volume2(int w,int h,int d)
	{
		System.out.println("(parameterised method)volume is: ");
		System.out.println(w*h*d);
	}
	
}
class a5
{
	public static void main(String args[])
	{
		Box b1=new Box();
		Box b2=new Box();
		b1.width = 10;
		b2.width = 3;
		
		b1.height=20;
		b2.height=6;
		
		b1.depth=30;
		b2.depth=7;
		
		b1.volume();
		double res=b2.volume1();
		System.out.println("volume of box 2: "+res);
		
		Box b3=new Box();
		b3.volume2(2,4,8);
	}
}