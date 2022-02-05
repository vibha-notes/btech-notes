// Static constructor not allowed

class test_3 {
    int a;
    private static test_3 ref = new test_3(100);

    private test_3() {
        a = 9;
    }

    private test_3(int x) {
        a = x;
    }

    static test_3 func(int x) {
        return new test_3(x);
    }
    void disp() {
        System.out.println("Value: " + this.a);
        System.out.println("Value inside ref: " + this.ref.a);
        System.out.println("Value inside ref inside ref: " + this.ref.ref.a);
        System.out.println("Value of ref: " + this.ref);
        System.out.println("Value of ref of ref: " + this.ref.ref);

    }
}

public class private_constructor {
    public static void main(String[] args) {
        test_3 ob1 = test_3.func(10);
        ob1.disp();
        test_3 ob2 = test_3.func(20);
    }
}
