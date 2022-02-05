public class MyNum
{
	private int val;
	private static MyNum ref = new MyNum(1000);  
	
	public MyNum(int val)
	{
		this.val = val;
	}
	// Observe the second part of the display is same for
	// all objects. ref is shared with all objects.
	public void disp()
	{
		System.out.println(this.val + ":" +
			this.ref.val);
	}
}

