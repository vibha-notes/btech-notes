class test {
    // When class in being loaded in class loading of JVM
    static int x;
    // Stored in class scope, independent of instances
    // Metaspace or permanent memory space (old)

    // When object is created, var is created
    int y;

    void fun() {
        System.out.println("x: " + x);
    }

    test() {
        System.out.println("Constructor of test");
    }

    static {
        x = 20;
        System.out.println("Static x: " + x);
    }

    static void morefun() {
        // Cannot directly access non-static functions
        // Can't use this or super
        System.out.println("Static function - x: " + x);
        // Can't nest static blocks, but can have multiple
    }

}

public class static_vars {
    static int a = 10;
    static int b;
    static {
        // Static block
        System.out.println("Inside static block");
        b = a + 10;
    }
    public static void main(String[] args) {
        test ob = new test();
        // ob.fun();
        System.out.println("Sup");
    }
}
