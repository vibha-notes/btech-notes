import java.util.*;

public class bubble {
    public static void main(String[] args) {
        int []arr = {10, 6, 8, 3, 5};
        System.out.println(Arrays.toString(arr));
        bubble_sort(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void bubble_sort(int []arr) {
        int temp;
        for (int i = 0; i < arr.length; ++i) {
            for (int j = 1; j < arr.length - i; ++j) {
                if (arr[j] < arr[j-1]) {
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}
