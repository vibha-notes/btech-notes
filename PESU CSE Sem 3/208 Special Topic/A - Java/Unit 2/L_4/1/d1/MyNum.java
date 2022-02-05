public class MyNum
{
	private int val;
	private MyNum ref; // some name!
	public MyNum()
	{
		this.val = 111;
		this.ref = null;
	}
	public MyNum(int val)
	{
		this.val = val;
		this.ref = new MyNum();
	}
	public void disp()
	{
		System.out.println(this.val + ":" +
			this.ref.val);
	}
}

