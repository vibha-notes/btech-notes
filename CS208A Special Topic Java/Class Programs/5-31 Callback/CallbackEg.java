
public class CallbackEg {
    public static void main(String [] args) {
        Demo d = new Demo();
        Test t = new Test();
        d.bar(t);

        Demo d1 = new Demo();
        d1.bar(new Test() {
            public void foo() {
                System.out.println("new foo body");
            }
        });
    }
}

interface Sample {
    public void foo();
}

class Test implements Sample {
    public void foo() {
        System.out.println("foo body");
    }
}

class Demo {
    // Implement without inheritance
    public void bar(Sample s) {
        s.foo();
    }
}