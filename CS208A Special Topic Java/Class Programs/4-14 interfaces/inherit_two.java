
// 
interface Sample1 {
    // Cannot write method body
    // Only prototypes
    void disp();
    // Default: public and abstract

    // final public (constant)
    int a = 10;
}
/* Multiple interface instead of inheritance */
interface Sample2 {
    /* All ints must be initialised */
    int b = 2;
    void show();
}

/* Must override all methods */
public class inherit_two implements Sample1, Sample2 {
    public void disp() {
        System.out.println("disp()");
    }

    public void show() {
        System.out.println("show()");
    }
    public static void main(String[] args) {
        /* Can't instantiate if abstract */
        inherit_two eg = new inherit_two();
        eg.disp();
        System.out.println(eg.a);
        eg.show();
        System.out.println(eg.b);
    }
}
