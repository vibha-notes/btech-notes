public class MyNum
{
	private int val;
	private static MyNum ref = null;  
	
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
		if(ref == null)
		{
			ref = new MyNum(10000);
		}
		return ref;
	}
}

