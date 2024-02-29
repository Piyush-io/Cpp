import java.util.Scanner;
public class circle3{
    private double x;
    private double y;
    private double r;
    public circle3(double x, double y, double r) {
        this.x = x;
        this.y = y;
        this.r = r;
    }
    public circle3()
    {
        this(1,2,3);
        System.out.println("Since you didn't pass arguments default constructor was called else parametrised constructor would have been called");
    }
    public void display() {
        System.out.println("Center: (" + x + ", " + y + ")");
        System.out.println("Radius: " + r);
    }
    public static void main(String[] args) {
        circle3 c = new circle3();
        System.out.println("Circle Information:");
        c.display();
    }
}
