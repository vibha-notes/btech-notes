import java.io.*;
import java.util.*;

public class exceptions_more {
    public static void main(String[] args) {
        File ob = null;

        try {
            ob = new File("junk.in");
            if (!ob.exists()) {
                throw new IOException("File does not exist");
            }
        } 
        catch (IOException e) {
            System.out.println(e);
        }

        Scanner ob2 = new Scanner(System.in);
        int i = ob2.nextInt();

        int a[] = {1, 2, 3};

        try {
            System.out.println("Elem: " + a[i]);
        } 
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }
        
    }
}
