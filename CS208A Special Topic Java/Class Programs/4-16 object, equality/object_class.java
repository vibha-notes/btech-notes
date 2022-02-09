public class object_class {
    public static void main(String[] args) {
        Rect r1 = new Rect(10, 20);

        // toString() Object class method
        // Rect@78308db1 (unique memory)
        System.out.println(r1);
        // println overloaded for objects, toString
        // class name and number

        // override toString
    }
}

class Rect {
    double length, breadth;

    Rect(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    // Needs to be public
    public String toString() {
        return length + " " + breadth;
    }
}