import java.util.Scanner;

public class TestArray {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter size of Array: ");
		int size=sc.nextInt();
		
		int arr[]=new int[size];
		
		for(int i=0; i<size; i++) {
			System.out.println("Enter element in index "+i);
			arr[i]=sc.nextInt();
		}
		
		System.out.print("Array: ");
		for(int i=0; i<size; i++) {
			System.out.print(arr[i]+" ");
		}
		
		sc.close();
	}
}
