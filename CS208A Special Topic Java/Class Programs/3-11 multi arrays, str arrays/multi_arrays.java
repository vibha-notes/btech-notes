public class multi_arrays {
    public static void main(String[] args) {
        // Need not have same number of columns
        int a[][] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9, 10}
        };

        disp1(a);
        disp2(a);

        int b[][] = new int [3][];
        b[0] = new int[] {1, 2, 3};
        b[1] = new int[] {7, 8};
        b[2] = new int[] {9, 10, 11, 12};
        disp2(b);

    }

    static void disp1(int [][] a) {
        for (int i = 0; i < a.length; ++i) {
            for (int j = 0; j < a[i].length; ++j) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }

    static void disp2(int [][] a) {
        for (int [] row:a) {
            for (int x: row) {
                System.out.print(x + " ");
            }
            System.out.println();
        }
        System.out.println();
    }
}
    
