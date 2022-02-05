//simple prog(// for single line comment)
/* comment 
here */      //  (/*----comment ----*/ for multiline comment)
public class a1// This line uses the keyword class to declare that a new class is being defined.a1 is an identifier that is the name of the class. 
{
	public static void main(String args[])//if signature of main method is different than this an error,which will be displayed when the command to execute is given :(java a1) in this case
	{
		/*
			public: So that JVM can execute the method from anywhere.
			static: Main method is to be called without object. 
			The modifiers public and static can be written in either order.
			void: The main method doesn't return anything.
			main(): Name configured in the JVM.
			String[]: The main method accepts a single argument: 
			an array of elements of type String
		*/
		int main=10;
		System.out.print("hello world"+main);
		System.out.println("hello world");
		// output:helloworld10helloworld
	}
}