// non static inner class
// every inner class object refers to an outer class object

public class Example1
{
	public static void main(String[] args)
	{
		Domain d1 = new Domain("RainBow");
		Domain.member m1 = d1.new member("john");
		Domain.member m2 = d1.new member("peter");
		Domain d2 = new Domain("Sea");
		Domain.member m3 = d2.new member("mary");
		m1.disp();
		m2.disp();
		m3.disp();
	}
}
class Domain
{
	private String name;
	public Domain(String name) { this.name = name; }
	class member
	{
		private String memberName;
		public member(String memberName)
		{
			this.memberName = memberName;
		}
		public void disp()
		{
			System.out.println("name : " + name + " member : " + memberName);
			
		}
	}
}
