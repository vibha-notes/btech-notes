// Collection of named constants
// Group of instances


// Can be defined outside or inside a class
// Cannot be defined inside a method
enum colour {
    // Constants, no. of them fixed in compile time
    // Must be first line
    // Calls constructor if user defined
    GREEN(1, "1"), RED(2, "2"), BLACK(3, "3");
    // internally, pub stat final consts as refs of class objs

    // Can also have this
    int amount;
    String name;


    // Always is private by default (cannot make public)
    colour(int x, String y) {
        amount = x;
        name = y;
    }
    void disp() {
        System.out.println("Amount: " + amount);
        System.out.println("Name: " + name);
    }
}
// java.lang.Enum -> parent

public class enums_eg {
    public static void main(String[] args) {
        // colour ob = new colour(); -> not allowed
        colour ob = colour.GREEN;
        ob.disp();
        System.out.println(ob); // -> toString()
        System.out.println(colour.values().length);

        for (colour x: colour.values()) {
            System.out.println(x);
        }

    }
}
