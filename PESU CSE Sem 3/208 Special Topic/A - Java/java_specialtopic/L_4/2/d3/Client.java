// Scope
public class Client
{
	public static void main(String[] args)
	{
		int a = 10;
		{
			// both a and b exist
			// cannot redeclare a (in java)
			// int a = 100; // ERROR
			int b = 20;
			System.out.println("inner block : " +
				"a : " + a + " b : " + b);
		}
		// b does not exist
		System.out.println("outer block : a : " + a);
		Test t1 = new Test();
		{
			Test t2 = new Test();
			// t1 exists; t2 exists;
			t1 = null;
			s=s+10;
			// t1 exists; does not point any object
			// whatever t1 referred earlier has become
			//	garbage!!
		} // t2 dies; what t2 refers is now garbage
		
	}
}
class Test
{
	public int t = 111;
}
