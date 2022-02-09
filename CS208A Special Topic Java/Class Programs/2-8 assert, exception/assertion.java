/* 
Assertions vs Exception

By default, assertions are not 
enabled (must specify while compiling)
*/

// For using Scanner class
import java.util.*;

public class assertion {
    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        int age = ob.nextInt();

        // Only works if -ea 
        assert (age <= 120): "Invalid age";
        System.out.println("Working");
    }
}
