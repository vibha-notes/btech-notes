import java.util.Scanner;

public class inputs {
    public static void main(String args[]) {
        // New Scanner instance
        Scanner ob = new Scanner(System.in);

        int a = ob.nextInt();
        float b = ob.nextFloat();
        String c = ob.next();
        char d = ob.next().charAt(0);
        System.out.println("a: " + a + " b: " + b + " c: " + c + " d: " + d);

        ob.close();
    }
}