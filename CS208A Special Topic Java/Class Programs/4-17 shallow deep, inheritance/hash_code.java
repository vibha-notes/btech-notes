

public class hash_code {
    public static void main(String[] args) {
        Rect r1 = new Rect(10, 20);
        Rect r2 = r1;
        Rect r3 = new Rect(10, 20);

        // Same
        System.out.println("hashcode r1 " + r1.hashCode());
        System.out.println("hashcode r2 " + r2.hashCode());

        // Different
        System.out.println("hashcode r3 " + r3.hashCode());

        r2.length = 23;

        System.out.println("r1 " + r1);
        System.out.println("r2 " + r2);

        System.out.println("r1 " + r1.length + " " + r1.breadth);
        System.out.println("r2 " + r2.length + " " + r2.breadth);

        System.out.println("hashcode r1 " + r1.hashCode());
        System.out.println("hashcode r2 " + r2.hashCode());
        
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

    // hashCode returns a unique int
    /* public int hashCode() {
        return (int) (length*breadth);
    } */
}