// anonymous inner class
public class Example4
{
	public static void main(String[] args)
	{
		Tester t1 = new Tester(); t1.test();
		// makes a new clas with no name; overrides whichever methods
		// it wants to.
		// avoids unnecessary name
		Tester t2 = new Tester() {
			public void test() { System.out.println("this is a new test"); }
		};
		t2.test();
	}
}
class Tester
{
	public void test() { System.out.println("this is a test"); }
}
