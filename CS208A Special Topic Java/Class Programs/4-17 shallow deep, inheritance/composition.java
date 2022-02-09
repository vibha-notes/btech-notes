

class C {
    public void show() {
        System.out.println("show() in C");
    }

    public int foo() {
        System.out.println("foo() in D");
        return 1;
    }
}

class D {
    C c = new C();

    public void show() {
        System.out.println("show() in D");
    }

    public void foo() {
        System.out.println("foo() in D");
        c.foo();
    }
}

public class composition {
    public static void main(String[] args) {
        System.out.println("In main()");

        D d = new D();
        d.show();
        d.foo();
    }
}
