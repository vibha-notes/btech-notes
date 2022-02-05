public class MyNum
{
	private int val;
	private static MyNum ref = new MyNum(1000);  
	
	private MyNum(int val)
	{
		this.val = val;
	}
	public void disp()
	{
		System.out.println(this.val + ":" +
			this.ref.val);
	}
	public static MyNum makeMyNum(int val)
	{
		return new MyNum(val);
	}
}

