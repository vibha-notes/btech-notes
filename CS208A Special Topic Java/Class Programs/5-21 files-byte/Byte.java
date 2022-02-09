
import java.io.*;
// Read byte by byte from files
// Prefer character streams (16 bit instead of 8)

public class Byte {
    public static void main(String[] args) throws IOException {
        FileInputStream in = null;
        FileOutputStream out = null;

        // Needs to be int
        int temp;

        try {
            in = new FileInputStream("hello.txt");
            out = new FileOutputStream("hi.txt");
            
            while ((temp = in.read()) != -1) {
                out.write(temp);
            }

        }
        catch (IOException e) {
            System.out.println(e);
        }
        finally {
            if (in != null) {
                in.close();
            }
            if (out != null) {
                out.close();
            }
        }
    }
}
