import java.util.*;

public class bin_search_prog {
    public static void main(String[] args) {
        int []arr = {1, 2, 3, 4, 5, 6};
        System.out.println("Enter element: ");
        Scanner ob = new Scanner(System.in);
        int el = ob.nextInt();
        int found = bin_search(arr, el);
        System.out.println(found);

    }    

    static int bin_search(int []sorted, int el) {
        return bin_rec(sorted, el, 0, sorted.length);
    }

    static int bin_rec(int []sorted, int el, int s, int e) {
        int m = (s + e)/2;
        if (s == e) {
            return -1;
        }
        if (el == sorted[m]) {
            return m;
        }
        else if (el < sorted[m]) {
            return bin_rec(sorted, el, s, m);
        }
        else {
            return bin_rec(sorted, el, m + 1, e);
        }
    }
}
