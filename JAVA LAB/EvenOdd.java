public class EvenOdd {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("Please provide a single integer as a command line argument.");
            return;
        }
        try {
            int number = Integer.parseInt(args[0]);
            String result = (number % 2 == 0) ? "even" : "odd";
            System.out.println("The number " + number + " is " + result + ".");
        } catch (NumberFormatException e) {
            System.out.println("Please provide a valid integer as a command line argument.");
        }
    }
}
