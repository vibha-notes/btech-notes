public class operators {
    public static void main(String args[]) {
        int a = 3;
        switch (a) {
            case 0: {
                System.out.println("Case 0");
                break;
            }
            case 1: {
                System.out.println("Case 1");
                break;
            }
            case 2: {
                System.out.println("Case 2");
                break;
            }
            case 3: {
                System.out.println("Case 3");
                break;
            }
            default: {
                // Best match, not first match
                System.out.println("Default");
            }
        }
    }
}