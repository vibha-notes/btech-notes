
public class Generics {
    public static void main(String[] args) {
        Box<String> b = new Box<String>();
        String s = "Java";
        b.put(s);
        String s1 = b.get();

        System.out.println(s1);

        // Compile time error
        // b.put(100);
        b.put("hello");
        String s2 = b.get();
        // int a = b.get();
        System.out.println(s2);

        // Needs to be reference type only
        // Box<int> b1 = new Box<int>();
        Box<Integer> b1 = new Box<>();
        b1.put(100);
        int a = b1.get();
        b1.disp();
        System.out.println(a); 

    }
}


class Box<T> {
    T o;
    public void put(T o) {
        this.o = o;
    }
    public T get() {
        return this.o;
    }
    public void disp() {
        System.out.println(o.getClass().getName());
    }
}