import java.util.Scanner;

public class stringtochar {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a string");
        String myString = s.nextLine();
        char[] charArray = myString.toCharArray();
        System.out.println("Characters as an array using toCharArray(): ");
        for (char ch : charArray) {
            System.out.println(ch);
        }
        s.close();
    }
}
