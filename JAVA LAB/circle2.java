import java.util.Scanner;
public class circle2 {
    private double x;
    private double y;
    private double r;
    public circle2(double x, double y, double r) {
        this.x = x;
        this.y = y;
        this.r = r;
    }
    public void display() {
        System.out.println("Center: (" + x + ", " + y + ")");
        System.out.println("Radius: " + r);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter x-coordinate of the center: ");
        double x = scanner.nextDouble();
        System.out.print("Enter y-coordinate of the center: ");
        double y = scanner.nextDouble();
        System.out.print("Enter radius: ");
        double r = scanner.nextDouble();
        circle2 c = new circle2(x, y, r);
        System.out.println("Circle Information:");
        c.display();
        scanner.close();
    }
}
