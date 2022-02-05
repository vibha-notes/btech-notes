
public class arrays {
    public static void main(String[] args) {
    
        // Declaring
        int [] a;
        int b[] = {10, 20, 30};

        int [] c = new int[]{30, 40, 50};

        // Not allowed
        // int [] c = new int[3]{30, 40, 50};
        a = new int[5];

        for (int i = 0; i < a.length; ++i) {
            System.out.print(a[i] + "\t");
        }
        System.out.println("\n");

        disp1(b);
        disp2(c);
    } 
    static void disp1(int [] a) {
        for (int i = 0; i < a.length; ++i) {
            System.out.print(a[i] + "\t");
        }
        System.out.print("\n");
    }
    static void disp2(int [] a) {
        for (int p:a) {
            System.out.print(p + "\t");
        }
        System.out.print("\n");
    }

}
