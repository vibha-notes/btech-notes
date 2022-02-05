// static inner class
// only relation between types;
public class Example2
{
	public static void main(String[] args)
	{
		int[] x = {1, 1, 2, 3, 5, 8, 13, 21, 34 };
		MyNumbers n = new MyNumbers(x);
		System.out.println(n.firstTwo().getFirst());
		MyNumbers.Pair p = n.lastTwo();
		System.out.println(p.getFirst() + " : " + p.getSecond());
	}
}
class MyNumbers
{
	private int[] a;
	public MyNumbers(int[] x) 
	{
		a = new int[x.length];
		for(int i = 0; i < x.length; i++)
		{
			a[i] = x[i];
		}
	}
	public Pair firstTwo()
	{
		return new Pair(a[0], a[1]);
	} 
	public Pair lastTwo()
	{
		return new Pair(a[a.length - 2], a[a.length - 1]);
	} 

	static public class Pair
	{
		private int first;
		private int second;
		public Pair(int first, int second)
		{
			this.first = first;
			this.second = second;
		}
		public int getFirst() { return first; }
		public int getSecond() { return second; }
	}
}
