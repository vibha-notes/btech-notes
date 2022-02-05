// If this class has only one object, this will become a singleton
public enum Books
{
	C("Kernighan & Ritchie", 200), 
	JAVA("Horstman", 600), 
	MATH("Erwin Kreyszig", 500);
	Books(String author, int price)
	{
		this.author = author;
		this.price = price;
	}
	private String author;
	private int price;
	public void disp()
	{
		System.out.println(author + ":" + price);
	}
}
