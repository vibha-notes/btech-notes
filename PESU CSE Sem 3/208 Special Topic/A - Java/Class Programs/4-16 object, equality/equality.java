
public class equality {
    public static void main(String[] args) {
        Rect r1 = new Rect(10, 20);
        Rect r2 = r1;

        // Reference semantics
    
        // Same number
        System.out.println(r1);
        System.out.println(r2);

        // true (compares references)
        System.out.println(r1 == r2);

        Rect r3 = new Rect(10, 20);

        // false (compares references)
        System.out.println(r1 == r3);

        // point to same loc

        System.out.println();

        // .equals

        // true (compares references)
        // We have overridden
        System.out.println(r1.equals(r2));

        // false (compares references)
        // We have overridden
        System.out.println(r1.equals(r3));
    }
}

class Rect {
    double length, breadth;

    Rect(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public boolean equals(Object o) {
        boolean res = false;

        if (o == null || !(o instanceof Rect)) {
            return res;
        }

        // if (o == this) // same

        else {
            Rect that = (Rect) o;
            res = this.length == that.length && this.breadth == that.breadth;
            
        }
        return res;
    }
}