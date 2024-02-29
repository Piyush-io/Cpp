import java.util.Scanner;
public class samesumindex {
    public static int findequi(int[] arr, int n) {
        int result = -1;
        if (n == 0)
            return result;
        int left_to_right_sum[] = new int[n];
        left_to_right_sum[0] = arr[0];
        int right_to_left_sum[] = new int[n];
        right_to_left_sum[n - 1] = arr[n - 1];
        for (int i = 1; i < n; i++) {
            left_to_right_sum[i] = left_to_right_sum[i - 1] + arr[i];
        }
        for (int i = n - 2; i >= 0; i--) {
            right_to_left_sum[i] = right_to_left_sum[i + 1] + arr[i];
        }
        for (int i = 1; i < n; i++) {
            if (left_to_right_sum[i - 1] == right_to_left_sum[i + 1]) {
                result = i;
                return result;
            }
        }
        return result;
    }
    public static void main(String[] args) {
        int n;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.println("Enter element " + (i+1) + " : ");
            arr[i] = scan.nextInt();
        }
        int res = findequi(arr, n);
        if (res == -1) {
            System.out.println("Not Possible");
        } else {
            System.out.println("Sum preceeding the index and sum of the succeeding elements is same at index: " + res);
        }
        scan.close();
    }
}
