package BubbleSort;

public class MyBubbleSort {
	public static void main(String[] args) {
		int[] arr= {98,63,21,46,10,58,49,78,33,15};
		MyBubbleSort.bubbleSort(arr);
		MyBubbleSort.display(arr);
	}
	public static void bubbleSort(int[] arr) {
		for(int i=0; i<arr.length-1; i++) {
			for(int j=0; j<arr.length-1-i; j++) {
				if(arr[j]>arr[j+1]) {
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
	}
	public static void display(int[] arr) {	
		for(int i=0; i<arr.length; i++) {
			System.out.print(arr[i]+" ");
		}
	}
}