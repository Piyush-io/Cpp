import java.util.Scanner;

public class AsciiCodeFinder{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char userChar = scanner.next().charAt(0);
        int asciiCode = (int) userChar;
        System.out.println("ASCII code of '" + userChar + "' is: " + asciiCode);
        scanner.close();
    }
}
