// 
public class Sample {
    public static void main(String[] args) {
        A o1 = new A(10);

        A o2 = new A() {
            void disp() {
                System.out.println("In anonymous class");
            }
        };

        o1.disp();
        // Name needs to be same
        // o2.display();
        o2.disp();
    }
}

class A {
    int x;
    A() {
        this.x = 100;
    }
    A(int x) {
        this.x = x;
    }
    void disp() {
        System.out.println("In class A");
    }
}