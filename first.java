import java.util.Scanner;
public class StringToChar{


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();
        char[] charArrayToString = inputString.toCharArray();
        char[] charArrayValueOf = new char[inputString.length()];
        for (int i = 0; i < inputString.length(); i++) {
            charArrayValueOf[i] = Character.valueOf(inputString.charAt(i));
        }
        System.out.println("String converted to character array using toString():");
        for (char c : charArrayToString) {
            System.out.print(c + " ");
        }
        System.out.println();
        System.out.println("String converted to character array using valueOf():");
        for (char c : charArrayValueOf) {
            System.out.print(c + " ");
        }
        scanner.close();
    }
}
