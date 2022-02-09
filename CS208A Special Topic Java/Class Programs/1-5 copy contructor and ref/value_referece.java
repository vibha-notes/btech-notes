class test {

    int a, b;

    test(int a, int b) {
        this.a = a;
        this.b = b;
    }

    // Call by value
    static void val_func(int i, int j) {
        i = i + 100;
        j = j + 300;
    }

    // Call by reference
    static void ref_func(test o) {
        o.a += 100;
        o.b += 300;
    }
 
    // Cleanup - garbage collection
    protected void finalize() {
        // Depracated
        // default is in java.lang.object - parent
        System.out.println("Finalizing");
    }
}

public class value_referece {
    public static void main(String[] args) {
        int i=10, j=20;
        System.out.println(i + " " + j);
        test.val_func(i, j);
        System.out.println(i + " " + j);

        test ob1 = new test(10, 20);
        System.out.println(ob1.a + " " + ob1.b);

        test.ref_func(ob1);
        System.out.println(ob1.a + " " + ob1.b);
        System.gc();
    }
}
