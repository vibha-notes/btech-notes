
import java.util.*;

public class ArrayListType {
    public static void main(String[] args) {
        List<Integer> a = new ArrayList<Integer>();
        a.add(10);
        a.add(20);
        a.add(50);

        // Can do without <Type>
        Iterator<Integer> i = a.iterator();
        while (i.hasNext()) {
            System.out.println(i.next());
        } 
    }
}
