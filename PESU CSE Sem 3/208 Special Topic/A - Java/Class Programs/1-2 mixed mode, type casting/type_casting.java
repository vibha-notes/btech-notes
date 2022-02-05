class type_casting {
    public static void main(String args[]) {
        double a = 2.3d;
        int b = (int) a;

        // Narrowing (explicit)
        System.out.println("a:" + a);
        System.out.println("b:" + b);

        int x = 5;
        float y = x;

        // Widening (implicit)
        System.out.println("x:" + x);
        System.out.println("y:" + y);

    }
}