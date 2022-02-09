
// Client - does not call foo() but calls bar()
public class MoreCallback {
    public static void main(String[] args) {
        Demo d = new Demo();
        Test t = new Test();

        d.bar(t);
    }
}

interface Sample {
    public void foo();
}

class Test implements Sample {
    public void foo() {
        System.out.println("foo in Test");
    }
}

class Demo {
    public void bar(Sample s) {
        s.foo();
    }
}