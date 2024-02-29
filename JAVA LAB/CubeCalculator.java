import java.util.*;
public class CubeCalculator {
    public static int cube(int number) {
        return number * number * number;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Please enter the number for the cube : ");
        int number = sc.nextInt();
        int result = cube(number);
        System.out.println("Cube of " + number + " is: " + result);
    }
}
