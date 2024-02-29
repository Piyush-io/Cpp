import java.util.Scanner;
public class Square {
    private int sideLength;

    public Square(int sideLength) {
        this.sideLength = sideLength;
    }
    public int calculateArea() {
        return this.sideLength * this.sideLength;
    }
    public boolean isEqual(Square other) {
        return this.sideLength == other.sideLength;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter side length of Square 1: ");
        int side1 = sc.nextInt();
        System.out.print("Enter side length of Square 2: ");
        int side2 = sc.nextInt();
        Square sq1 = new Square(side1);
        Square sq2 = new Square(side2);

        System.out.println("Square 1 is equal to Square 2: " + sq1.isEqual(sq2));
        System.out.println("Area of Square 1: " + sq1.calculateArea());
        System.out.println("Area of Square 1: " + sq2.calculateArea());
        sc.close();
    }
}
