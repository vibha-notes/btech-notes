class test_2 {
    private int value;

    // This is allowed
    private static test_2 ref = new test_2(100);
    
    test_2() {
        value = 7;
        ref = null;
    }

    test_2(int x) {
        value = x;
        ref = new test_2();
    }

    void disp() {
        System.out.println("Value: " + this.value);
        System.out.println("Value inside ref: " + this.ref.value);
        System.out.println("Value inside ref: " + this.ref.ref.value);
    }
}


public class private_static {
    public static void main(String[] args) {
        test_2 ob1 = new test_2(111);
        test_2 ob2 = new test_2(222);

        ob1.disp();
        ob2.disp();
    }
}
