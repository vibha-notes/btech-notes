class test {
    int a, b;

    // Constructors
    test() {
        a = 0; 
        b = 0;
    }

    test(int a, int b) {
        this.a = a;
        this.b = b;
    }

    // Copy constructor
    test(test o) {
        a = o.a;
        b = o.b;
    }
}

public class copy_const {
    public static void main(String[] args) {
        test ob1 = new test(10, 20);
        test ob2 = new test(ob1);
        System.out.println(ob1.a + " " + ob1.b);
        System.out.println(ob2.a + " " + ob2.b);

        ob1.a = 30;
        System.out.println(ob1.a + " " + ob1.b);
        System.out.println(ob2.a + " " + ob2.b);

        ob2.a = 40;
        System.out.println(ob1.a + " " + ob1.b);
        System.out.println(ob2.a + " " + ob2.b);

    }
}
