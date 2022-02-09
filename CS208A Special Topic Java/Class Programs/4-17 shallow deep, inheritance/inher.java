

class B extends A {
    public void show() {
        System.out.println("show() in B");
    }

    // Return type must match
    public void foo() {
        System.out.println("foo() in B");
    }
}

class A {
    public void show() {
        System.out.println("show() in A");
    }

    // Return type must match
    public int foo() {
        System.out.println("foo() in A");
        return 1;
    }
}

public class inher {
    public static void main(String[] args) {
        System.out.println("In main()");

        B b = new B();
        b.show();
        b.foo();
    }
}
