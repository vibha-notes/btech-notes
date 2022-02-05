
// can the ctors of the class be made private? yes
// how do we instantiate such a class? YES, through a static method
// Can we control the number of objects?
//	This allows only one object of the class : called singleton class
public class Client
{	
	public static void main(String[] args)
	{
		MyNum x = MyNum.makeMyNum(11);
		x.disp();
		MyNum y = MyNum.makeMyNum(22);
		y.disp();

	}
}
