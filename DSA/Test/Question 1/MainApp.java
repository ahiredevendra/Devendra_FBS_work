package p1;

import java.util.Scanner;

public class MainApp {
	public static void main(String[] args) {
		MyDoublyLinkedList numbers=new MyDoublyLinkedList();
		Scanner sc=new Scanner(System.in);
		int choice;
		
		do {
			System.out.println("1. Insert Element");
			System.out.println("2. Display Elements");
			System.out.println("3. Delete Element");
			System.out.println("4. Exit");
			System.out.println("Enter choice");
			choice=sc.nextInt();
			
			switch(choice) {
				case 1:{
					int ele;
					System.out.println("Enter Element: ");
					ele=sc.nextInt();
					numbers.Insert(ele);
					break;
				}
				case 2:{
					numbers.display();
					break;
				}
				case 3:{
					int ele;
					System.out.println("Enter element you want to delete");
					ele=sc.nextInt();
					numbers.deleteEle(ele);
					break;
				}
				default:{
					System.out.println("Invalid choice!!");
				}
			}
		}while(choice!=4);
		sc.close();
	}
}
