import java.io.*;
import java.util.*;

public class exception_func {
    
    public static void main(String[] args) {
        try {
            foo();
        }
        catch (IOException e) {
            System.out.println(e);
        }
        
    }
    static void foo() throws IOException {
        Scanner ob = new Scanner(new File("junk.txt"));
    }
}
