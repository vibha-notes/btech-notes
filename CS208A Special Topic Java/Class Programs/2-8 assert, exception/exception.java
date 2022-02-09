/* try, catch, finally, throw, throws */

import java.util.*;
import java.io.*;

public class exception {
    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);

        // File handling
        Scanner obf = null;
        try {
            int arr[] = {1, 2, 3};
            int i = ob.nextInt();

            obf = new Scanner(new File("junk.txt"));

            System.out.println("Elem: " + arr[i]);
            System.out.println("End");
        }
        catch (ArrayIndexOutOfBoundsException e) {
            // Inbuilt toString function
            System.out.println(e);
        }
        catch (IOException e) {
            // Inbuilt toString function
            System.out.println(e);
        }
        catch (Exception e) {
            /* 
            More generic 
            Unlike C switch cases, order matters 
            (not just best match; first match)
            */
            System.out.println(e);
        }
        // Always occurs
        finally {
            if (obf != null) {
                obf.close();
                obf = null;
            }
            System.out.println("Finally");
        }
    }
}
