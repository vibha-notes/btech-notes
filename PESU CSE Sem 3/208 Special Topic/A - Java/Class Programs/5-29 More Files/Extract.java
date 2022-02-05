
import java.io.*;
import java.util.*;

public class Extract {
    public static void main(String[] args) throws IOException {
        Scanner in = null;
        List<String> cities = new ArrayList<String>();

        try {
            String city, place;
            in = new Scanner(new File("places.txt"));

            while (in.hasNext()) {
                city = in.next();
                // Unique
                if (cities.indexOf(city) == -1) {
                    cities.add(city);
                }
                if (in.hasNext()) {
                    place = in.next();
                    System.out.println(place);
                }
            }
            System.out.println();
            for (String i: cities) {
                System.out.println(i);
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
