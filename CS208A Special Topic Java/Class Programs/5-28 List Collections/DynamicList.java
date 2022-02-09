
import java.util.*;

public class DynamicList {
    public static void main(String[] args) {
        // No type
        List<Integer> a = new ArrayList<Integer>();
        a.add(10);
        a.add(20);
        a.add(50);
        // a.add("pes");

        // Safety - Object
        for (Object i: a) {
            System.out.println(i);
        }

        Iterator<Integer> i = a.iterator();
        while (i.hasNext()) {
            System.out.println(i.next());
        }
    }
}

interface Hello {
    static void foo() {
        System.out.println("foo");
    }
}