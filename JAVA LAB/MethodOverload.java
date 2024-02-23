import java.util.*;;

public class MethodOverload {
    public static void CalcArea(double n) {
        System.out.println(3.14 * n * n);
    }

    public static void CalcArea(int length, int breadth) {
        System.out.println(length * breadth);
    }

    public static void CalcArea(double base, double height) {
        System.out.println(0.5 * base * height);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int choice;

        System.out.println("Choose an option:");
        System.out.println("1. Calculate area for Circle");
        System.out.println("2. Calculate area for Rectangle");
        System.out.println("3. Calculate area for Triangle");

        System.out.print("Enter your choice (1, 2, or 3): ");
        choice = scan.nextInt();
        switch (choice) {
            case 1: {
                System.out.println("Enter radius: ");
                double r = scan.nextDouble();
                CalcArea(r);
                break;
            }
            case 2: {
                System.out.println("Enter length and breadth: ");
                int l = scan.nextInt();
                int b = scan.nextInt();
                CalcArea(l, b);
                break;
            }
            case 3: {
                System.out.println("Enter base and height: ");
                double b = scan.nextDouble();
                double h = scan.nextDouble();
                CalcArea(b, h);
                break;
            }
            default:
                System.out.println("Invalid choice. Please enter 1, 2, or 3.");
        }
        scan.close();
    }
}
