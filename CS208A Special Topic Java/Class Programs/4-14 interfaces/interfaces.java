/* Interface gives flexibility (using 
class/method name), capital letter */
interface Sample {
    // Cannot write method body
    // Only prototypes
    void disp();
    // Default: public and abstract

    int a = 10;
}

public class interfaces implements Sample {
    public void disp() {
        // Has to be public
        System.out.println("Hello");
    }
    public static void main(String[] args) {
        interfaces eg = new interfaces();
        eg.disp();
        System.out.println(eg.a);
    }
}
