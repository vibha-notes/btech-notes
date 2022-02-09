
import java.io.*;
import java.util.*;


// Never check end of file?? Data Streams not good
public class ScanningDataTypes {
    public static void main(String[] args) throws IOException {
        int [] a = {10, 20, 30, 40, 50};
        String[] s = {"hello", "java", "course"};
        DataOutputStream out = null;
        try {
            out = new DataOutputStream(new BufferedOutputStream(new FileOutputStream("hi.txt")));

            for (int i = 0; i < a.length; ++i) {
                // out.writeUTF(s[i]);
                out.writeInt(a[i]);
            }
            
        } 
        catch (IOException e) {
            System.out.println(e);
        }
        finally {
            if (out != null) {
                out.close();
            }
        }
    }
}
