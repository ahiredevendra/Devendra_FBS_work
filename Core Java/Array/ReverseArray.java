
import java.util.Scanner;

public class ReverseArray {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of array: ");
        int size = sc.nextInt();

        int arr[] = new int[size];

        for(int i=0; i<size; i++) {
            System.out.print("Enter element: ");
            arr[i]=sc.nextInt();
        }

        System.out.print("Reversed Array: ");

        for (int i=size-1; i>=0; i--) {
            System.out.print(arr[i]+" ");
        }

        sc.close();
    }
}
