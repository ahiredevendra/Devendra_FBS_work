package BinarySearch;

public class MyBinarySearch {
	public static void main(String[] args) {
		int[] arr={9,13,28,36,42,58,61,79,88};
		int ele=82;
		
		int index=MyBinarySearch.binarysearch(arr, ele);
		if(index!=-1) {
			System.out.println("Element found at index "+index);
		}
		else {
			System.out.println("Element not found!!");
		}
	}
	public static int binarysearch(int[] arr, int ele) {
		int left=0;
		int right=arr.length-1;
		
		while(left<=right) {
			int mid=(left+right)/2;
			if(ele==arr[mid]) {
				return mid;
			}
			else if(ele>arr[mid]) {
				left=mid;
			}
			else {
				right=mid-1;
			}
		}
		return -1;
	}
}
