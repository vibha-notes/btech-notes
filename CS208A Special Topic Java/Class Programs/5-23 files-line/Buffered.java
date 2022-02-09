import java.io.*;

public class Buffered {
    public static void main(String[] args) throws IOException {
        
        BufferedReader in = null;
        PrintWriter out = null;

        try {
            in = new BufferedReader(new FileReader("hello.txt"));
            out = new PrintWriter(new FileWriter("hi.txt"));

            String temp;
            while ((temp = in.readLine()) != null) {
                out.println(temp);
            }
        } 
        catch (IOException e) {
            System.out.println(e);
        }
        finally {
            if (in != null) in.close();

            if (out != null) out.close();
        }
    }    
}
