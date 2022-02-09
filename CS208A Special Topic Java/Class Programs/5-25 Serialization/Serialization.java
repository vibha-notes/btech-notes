import java.io.*;
// import java.util.*;
// Object stream - serialization
// Store object in file


public class Serialization {
    public static void main(String[] args) throws IOException {
        Sample s = new Sample();
        s.i = 209;

        System.out.println(s.i);
        Sample s1 = new Sample();

        // Stores 0
        System.out.println(s1.i);

        try {
            File f = new File("hi.txt");
            FileOutputStream fo = new FileOutputStream(f);
            ObjectOutputStream oo = new ObjectOutputStream(fo);
            oo.writeObject(s);
            oo.close();

            FileInputStream fi = new FileInputStream(f);
            ObjectInputStream io = new ObjectInputStream(fi);
            
            try {
                Sample temp = (Sample) io.readObject();
                System.out.println(temp.i);
            }
            catch (ClassNotFoundException e) {
                System.out.println(e);
            }
            finally {
                if (io != null) {
                    io.close();
                }
            }
        } 
        catch (IOException e) {
            System.out.println(e);
        }
    }
}

class Sample implements Serializable {
    private static final long serialVersionUID = 1L;
    int i;
}