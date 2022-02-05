class test {
    static int factorial(int x) {
        if (x <= 1) return 1;

        return x*factorial(x-1);
    }
}

public class recursion {
    public static void main(String[] args) {
        int n = 5;


        System.out.println(test.factorial(n));
    }
}
