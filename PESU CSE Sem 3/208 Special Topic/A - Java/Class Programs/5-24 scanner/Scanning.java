
import java.io.*;
import java.util.*;

public class Scanning {
    public static void main(String[] args) throws IOException {
        Scanner in = null;

        try {
            in = new Scanner(new BufferedReader(new FileReader("hello.txt")));

            while (in.hasNext()) {
                System.out.println(in.next());
            }
            
        } 
        catch (IOException e) {
            System.out.println(e);
        }
        finally {
            if (in != null) {
                in.close();
            }
        }
    }
}
