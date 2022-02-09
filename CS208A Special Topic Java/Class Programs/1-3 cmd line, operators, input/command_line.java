
public class command_line {
    public static void main(String args[]) {
        System.out.println("arg 0: " + args[0]);
        int res = Integer.parseInt(args[0]) + 20;
        System.out.println("Result: " + res);
    }
}