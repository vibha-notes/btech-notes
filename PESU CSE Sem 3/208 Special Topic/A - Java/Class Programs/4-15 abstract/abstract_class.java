
// 
abstract class Sample {
    int a = 99;
    // Both allowed
    // can't have body for abstract
    void disp() {
        System.out.println("In disp");
    }
    abstract void print(); // explicitly
    // Body will be implemented later
}

public class abstract_class extends Sample {
    // Can try @Override
    // Can be public, protected, default but not private; works for me??
    public void print() {
        // must implement
        System.out.println("In print");
    }
    public static void main(String[] args) {
        abstract_class eg = new abstract_class();
        eg.a = 999;
        System.out.println(eg.a);
        System.out.println("In main");
    }
}
