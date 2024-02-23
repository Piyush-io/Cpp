public class CircleArea {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("Please provide the radius of the circle as a command line argument.");
            return;
        }
        try {
            double radius = Double.parseDouble(args[0]);
            double area = Math.PI * radius * radius;
            System.out.println("The area of the circle with radius " + radius + " is: " + area);
        } catch (NumberFormatException e) {
            System.out.println("Please provide a valid number as the radius of the circle.");
        }
    }
}
