import java.util.*;

public class findaverage {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        float arr[] = new float[n];

        float avg = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
            avg += arr[i];
        }
        avg = avg / n;
        System.out.println("Average of the given array is: " + avg);
        scan.close();
    }
}