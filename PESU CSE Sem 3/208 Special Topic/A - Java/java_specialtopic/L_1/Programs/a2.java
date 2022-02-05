//type casting

class a2
{
	public static void main(String args[])
	{
		double x=2.3d;//narrowing(type casting)
		int y=(int)x;
		System.out.println(x);//2.3
		System.out.println(y);//2
		int a=10;
		float b=a;
		System.out.println(a);//10
		System.out.println(b);//10.0(widening casting)
	}
}
