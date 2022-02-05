

public class copy_java {
    public static void main(String[] args) {
        Rect r1 = new Rect(10, 20);

        // Want to copy, gets referenced
        // Shallow copy
        Rect r2 = r1;

        Rect r3 = new Rect(20, 10);
        r3.length = r1.length;

        System.out.println(r3);

        // Clone
        // Protected access
        // Need to override
        Rect r4 = r1.clone();

        System.out.println(r1);
        System.out.println(r2);
        System.out.println(r3);
        System.out.println(r4);

    }
}

// Need to implement Cloneable
class Rect implements Cloneable {
    double length, breadth;

    Rect(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    // Needs to be public
    public String toString() {
        return length + " " + breadth;
    }

    // Needs to be public (protected by default)
    public Rect clone() {
        Rect that = null;
        try {
            that = (Rect) super.clone();
        }
        catch (CloneNotSupportedException e) {
            System.out.println(e);
        }
        return that;
    }
}