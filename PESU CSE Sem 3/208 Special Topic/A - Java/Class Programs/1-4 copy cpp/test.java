class helper_class {
    int l, b, d;

    // No more implicit default constructor, need explicit
    helper_class(int x, int y, int z) {
        l = x;
        b = y;
        d = z;
    }

    helper_class() {
        l = 0;
        b = 0;
        d = 0;
    }

    int volume() {
        return l*b*d;
    }

    /* 
    Hiding
    helper_class(int l, int b, int d) {
        Unless you use 'this', it is undefined behaviour
        Instance variables hidden by parameterss
        'this' can be used anywhere

        this.l = l;
        this.b = b;
        this.d = d;
    }

    */

}

class test {
    // Must be inside test class as file is test.java
    public static void main(String args[]) {

        // Instance of class test
        helper_class o1 = new helper_class(10, 30, 20);

        // If you use ' ', ASCII values add up to give 124
        System.out.println(o1.l + " " + o1.b + " " + o1.d);
        
        // Dot operator for methods
        System.out.println(o1.volume());

        /* 
        Points to same location as o1
        Changes are reflected
        Unlike C++ - check main.cpp in this folder
        
        */
        helper_class o2 = o1;

        o2.b = 60;

        System.out.println(o1.l + " " + o1.b + " " + o1.d);
    }
}