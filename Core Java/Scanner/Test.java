import java.util.Scanner;

class TestScanner {

	public static void main(String[] args) {
	    Scanner input =new Scanner(System.in);
	    int[] arr=new int[5];
	    
	    System.out.println("Enter values in array:");
	    for(int i =0; i<arr.length;i++) {
	    	arr[i]=input.nextInt();
	    }
	    System.out.println("values in array");
	    for(int i= 0; i<arr.length;i++) {
	    System.out.println(arr[i]);

	}
	}
}
