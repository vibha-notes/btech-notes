import java.util.*;

public class str_array {
    public static void main(String[] args) {
        String names[];
        Scanner ob = new Scanner(System.in);

        int n = ob.nextInt();
        names = new String[n];
        read_names(names, n, ob);
        disp_names(names, n, ob);
    }

    static void read_names(String[] names, int n, Scanner ob) {
        for (int i = 0; i < n; ++i) {
            names[i] = ob.next();
        }
    }

    static void disp_names(String[] names, int n, Scanner ob) {
        for (int i = 0; i < n; ++i) {
            System.out.println(names[i]);
        }
    }
}
