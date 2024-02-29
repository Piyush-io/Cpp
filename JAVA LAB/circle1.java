import java.util.Scanner;
public class circle1 {
    private double x = 5;
    private double y = 6;
    private double r = 5;
    public void display() {
        System.out.println("Center: (" + x + ", " + y + ")");
        System.out.println("Radius: " + r);
    }
    public static void main(String[] args) {
        circle1 c = new circle1();
        System.out.println("Circle Information:");
        c.display();
    }
}
