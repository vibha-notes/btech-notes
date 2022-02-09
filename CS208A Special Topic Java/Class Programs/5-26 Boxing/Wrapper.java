

public class Wrapper {
    public static void main(String[] args) {
        int x = 10;
        // Integer y = new Integer(20);
        // Better:
        Integer y = Integer.valueOf(20);
        Integer c = 30; // Boxing
        int d = c;      // Unboxing

        Box b = new Box();
        String s = "Java";
        b.put(s);
        String s1 = (String) b.get();

        System.out.println(s1);


        // Runtime error: not compile time
        // To fix: Generics
        b.put(100);
        String s2 = (String) b.get();
        // int a = (int) b.get();
        System.out.println(s2);

    }
}



class Box {
    Object o;
    public void put(Object o) {
        this.o = o;
    }
    public Object get() {
        return this.o;
    }
}