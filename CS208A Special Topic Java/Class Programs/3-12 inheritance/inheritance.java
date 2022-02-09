public class inheritance {
    public static void main(String[] args) {
        Child ob = new Child(10, 20);
        ob.disp();
        ob.fun();


        // Liskov's Substitution 
        System.out.println();
        // Both constructors called
        Parent super_ob = new Child(10, 100);
        super_ob.fun();

        // Not allowed
        // super_ob.disp();


        // Not allowed - down casting
        // Child sub_ob = new Parent(10);
    }

    static void foo(Parent a) {
        System.out.println("Liskov's substitution");
    }
}

class Parent {
    int x;
    // No defualt parameter less constructor

    /* Parent() {
        x = 10;
        System.out.println("Base class constructor");
    } */

    Parent(int a) {
        x = a;
        System.out.println("Base class constructor");
    }
    void fun() {
        System.out.println("Base Class " + x);
    }
}

// 'is a' relationship
class Child extends Parent {
    int y;
    Child() {
        super(10);
        y = 20;
        System.out.println("Derived class constructor");
    }
    Child(int a, int b) {
        // Should be first statement in constructor - super
        super(a);
        // Unnamed object of superclass
        System.out.println("Derived class constructor");
        y = b;
    }

    void disp() {
        System.out.println("Derived class " + x + " " + y);
    }
}

// If same function defined in both classes, the function from
// The child will be called for child objects and the parent
// Will be called for super class object
