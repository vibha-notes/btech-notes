// check the built class called Arrays
// all methods are static methods
// such a class is not exactly object oriented
// we call them utility classes 
// another example : Math class

// 1. fill
// 2. copy
// 3. sort
// 4. binarysearch
// 5. toString

import java.util.*;
public class Example1
{
	public static void main(String[] args)
	{
		int[] a = {33, 99, 11, 55, 88, 44, 66, 22, 77 };
		System.out.println(Arrays.toString(a));

		Arrays.sort(a);
		System.out.println(Arrays.toString(a));

		int[] b; // what if we allocate here? what will
		// happen to the size after copying?
		// compare the outputs
		b = Arrays.copyOf(a, 5);
 		System.out.println(Arrays.toString(b));
		b = Arrays.copyOf(a, 15);
 		System.out.println(Arrays.toString(b));

		int[] c = {1, 2, 3, 4};
		Arrays.fill(c, 100);
		System.out.println(Arrays.toString(c));
		
		int[] d = {1, 2, 3, 4};
		Arrays.fill(d, 0, 2, 200); // 0 to 2 and 2 not inclusive
		System.out.println(Arrays.toString(d));


		//binary search
		System.out.println("search : " +
			Arrays.binarySearch(a, 77));
		System.out.println("search : " +
			Arrays.binarySearch(a, 82));
		// find the meaning of the return value if search
		//	fails.
	}
}
