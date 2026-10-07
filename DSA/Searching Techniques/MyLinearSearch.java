package LinearSearch;

public class MyLinearSearch {
	public static void main(String[] args) {
		int[] arr= {26,10,95,82,76};
		int ele=82;
		
		int x=MyLinearSearch.linearSearchAlgo(arr, ele);
		if(x!=-1) {
			System.out.println("Element found at index "+x);
		}
		else {
			System.out.println("Element not found!!");
		}
	}

	public static int linearSearchAlgo(int[] arr, int ele) {
		for(int i=0; i<arr.length; i++) {
			if(arr[i]==ele) {
				return i;
			}
		}
		return -1;
	}
}

//Notebook llm