class test {
    int a, b;

    // Constructor
    test(int a, int b) {
        this.a = a;
        this.b = b;
    }

    // Passed by reference
    boolean func(test o) {
        return ((a == o.a) && (b == o.b));
    }


}

public class reference {
    public static void main(String args[]) {
        test ob1 = new test(10, 20);
        test ob2 = new test(20, 10);
        test ob3 = new test(10, 20);

        boolean res = ob1.func(ob2);
        if (res) {
            System.out.println("1 and 2 same");
        }
        else {
            System.out.println("1 and 2 diff");
        }

        res = ob2.func(ob3);
        if (res) {
            System.out.println("2 and 3 same");
        }
        else {
            System.out.println("2 and 3 diff");
        }

        res = ob3.func(ob1);
        if (res) {
            System.out.println("3 and 1 same");
        }
        else {
            System.out.println("3 and 1 diff");
        }

    }

}
