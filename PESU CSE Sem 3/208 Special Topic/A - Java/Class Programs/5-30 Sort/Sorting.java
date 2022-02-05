
import java.util.*;

public class Sorting {
    public static void main(String[] args) {
        List<String> l = new ArrayList<String>();

        String[] s = {"orange", "mango", "apple", "banana", };

        for (String i: s) {
            l.add(i);
        }
        System.out.println(l);

        // Ascending
        Collections.sort(l);
        System.out.println(l);

        // Custom - increasing length
        Collections.sort(l, new Comparator<String>() {
            public int compare(String left, String right) {
                return left.length() - right.length();
            }
        });
        System.out.println(l);
    }
}
