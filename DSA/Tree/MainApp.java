package com.fbs.demo;

import java.util.Scanner;

public class MainApp {

	public static void main(String[] args) {
		MyTree rollNumbers=new MyTree();
		Scanner sc=new Scanner(System.in);
		int choice;
		
		do {
			System.out.println("\t1. Insert Element");
			System.out.println("\t2. Display Inorder");
			System.out.println("\t3. Display Preorder");
			System.out.println("\t4. Display Postorder");
			System.out.println("\t5. Exit");
			System.out.println("Enter your choice");
			choice = sc.nextInt();
			
			switch(choice) {
				case 1:{
					System.out.println("Enter an element: ");
					int data = sc.nextInt();
					rollNumbers.insert(data);
					break;
				}
				case 2:{
					rollNumbers.inorder();
					break;
				}
				case 3:{
					rollNumbers.preorder();
					break;
				}
				case 4:{
					rollNumbers.postorder();
					break;
				}
				case 5:{
					System.out.println("Program Exited!!");
					break;
				}
				default:{
					System.out.println("\t---INVALID CHOICE---");
					break;
				}
			}
		}while(choice!=5);
		sc.close();	
	}
}
