public class MultiplyDoubles {
    public static void main(String[] args) {
        if (args.length != 2) {
            System.out.println("Please provide two doubles as command line arguments.");
            return;
        }
        try {
            double num1 = Double.parseDouble(args[0]);
            double num2 = Double.parseDouble(args[1]);
            double product = num1 * num2;
            System.out.println("Product of " + num1 + " and " + num2 + " is: " + product);
        } catch (NumberFormatException e) {
            System.out.println("Please provide valid doubles as command line arguments.");
        }
    }
}
