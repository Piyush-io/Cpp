import java.util.Scanner;

public class chartostring {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a no. of characters");
        int n = s.nextInt();
        String myString = "";

        for (int i = 0; i < n; i++) {
            char mychar = s.next().charAt(0);
            myString += mychar;
        }

        System.out.println(myString);
        s.close();
    }
}
