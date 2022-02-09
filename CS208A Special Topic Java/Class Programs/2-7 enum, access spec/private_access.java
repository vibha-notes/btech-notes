class test {
    private int value;

    // This is allowed
    private test ref;
    
    test() {
        value = 7;
        ref = null;
    }

    test(int x) {
        value = x;
        ref = new test();
    }

    void disp() {
        System.out.println("Value: " + this.value);
        System.out.println("Value inside ref: " + this.ref.value);
        System.out.println("Value of ref: " + this.ref);
        System.out.println("Value of ref of ref: " + this.ref.ref);


    }
}

public class private_access {
    public static void main(String[] args) {
        test ob1 = new test(111);
        test ob2 = new test(222);

        ob1.disp();
        ob2.disp();
    }
}   
