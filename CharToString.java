import java.util.Scanner;


public class CharToString {


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char inputChar = scanner.next().charAt(0);
        String str = Character.toString(inputChar);
        System.out.println("Character converted to string using Character.toString(): " + str);


        scanner.close();
    }
}
