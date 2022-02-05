// can a member of a class be a reference member? yes
// can a member of a class be a static and reference member?
// can the ctors of the class be made private?
// how do we instantiate such a class?
public class Client
{	
	public static void main(String[] args)
	{
		MyNum x = new MyNum(222);
		x.disp();
	}
}
