import java.util.*;
// assert:
//	check for a boolean condition
//	not enabled by default
//	run :
//	java -ea Assert1

// 	exception : used to indicate unusual conditons
//			cannot switch off exceptions

//	assertion : to catch programming bugs
//			to check pre-condition, post-condition,
//			invariants
//		    can be enabled or disabled at runtime
public class Assert1
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		double n;
		n = scanner.nextDouble();
		// Two forms of assertion;
		//	second is considered better
		// check whether the number is positive
		// 1. assert n >= 0;
		// 2. assert n >= 0 : "number is negative";
		assert n >= 0 : "number is negative";
		System.out.println("sqrt : " + Math.sqrt(n));
				
	}
}
	
