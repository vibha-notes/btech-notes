// difference between String and StringBuilder,StringBuffer
// immutability,mutability,thread safe
// functions like :
//		append
//      
public class Example3
{
	public static void main(String[] args)
	{
		String s = "mahopaadhyaaya";
//		StringBuilder sb = "mahopaadhyaya"; // Error
		StringBuilder sb = new StringBuilder("mahopaadhyaaya");
		System.out.println(s);
 		System.out.println(sb);
 		sb.insert(3, "aamah");
 		System.out.println(sb);
		
		// check for palindrome
		String s1 = "malayalam";
		String s2 = "kannada";
		System.out.println(new StringBuilder(s2).reverse());

		System.out.println(new StringBuilder(s1).reverse().toString() == s1);
		System.out.println(new StringBuilder(s2).reverse().toString() == s2);

		System.out.println(new StringBuilder(s1).reverse().toString().equals(s1));
		System.out.println(new StringBuilder(s2).reverse().toString().equals(s2));
	}
}
