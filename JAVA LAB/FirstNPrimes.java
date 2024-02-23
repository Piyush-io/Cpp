import java.util.Scanner;
public class FirstNPrimes {
    static boolean isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of n: ");
        int n = scanner.nextInt();
        System.out.println("The first " + n + " prime numbers are:");
        int count = 0;
        for (int num = 2; count < n; num++) {
            if (isPrime(num)) {
                System.out.print(num + " ");
                count++;
            }
        }
        scanner.close();
    }
}
