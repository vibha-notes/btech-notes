
// can the ctors of the class be made private? yes
// how do we instantiate such a class? YES, through a static method
// Can we control the number of objects?

public class Client
{	
	public static void main(String[] args)
	{
		// cannot call ctor
		//MyNum x = new MyNum(222);
		//x.disp();
		//MyNum y = new MyNum(333);
		//y.disp();

		// can we call any instance method of the class?
		//	NO
		// can we call a class method(static method)
		// YES
		// can that method make an object? YES
		MyNum x = MyNum.makeMyNum(11);
		x.disp();
		MyNum y = MyNum.makeMyNum(22);
		y.disp();

	}
}
