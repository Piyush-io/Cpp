import java.util.Scanner;

public class SwapNumbers {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int n1 = s.nextInt();
        System.out.print("Enter the second number: ");
        int n2 = s.nextInt();
        System.out.println("Before: " + n1 + ", " + n2);
        n1 = n1 ^ n2;
        n2 = n1 ^ n2;
        n1 = n1 ^ n2;
        System.out.println("After: " + n1 + ", " + n2);
        s.close();
    }
}
