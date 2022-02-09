import java.util.*;

public class array_class {
    public static void main(String[] args) {
        int [] a = {3, 5, 2, 6, 1};
        System.out.println(a.length);

        System.out.println(Arrays.toString(a));

        Arrays.sort(a);
        System.out.println(Arrays.toString(a));

        int b[];
        b = Arrays.copyOf(a, 4);
        System.out.println(Arrays.toString(b));

        int c[];
        // Initialised with zeroes - not in place
        c = Arrays.copyOf(a, 15);
        System.out.println(Arrays.toString(c));

        int d[] = {10, 20, 30, 40};
        // Inplace replacement
        Arrays.fill(d, 1, 3, 999);
        System.out.println(Arrays.toString(d));

        // Binary search on sorted arrays
        // Negative number if not found

        System.out.println(Arrays.toString(b));
        System.out.println(Arrays.binarySearch(b, 1));
        System.out.println(Arrays.binarySearch(b, 100));

    }
}
