package com.fbs.demo;

import java.util.Scanner;

public class MainApp {

	public static void main(String[] args) {
		MyArrayList rollNumbers=new MyArrayList();
		Scanner sc=new Scanner(System.in);
		int choice;
		
		do {
			System.out.println("\t1. Add");
			System.out.println("\t2. Get");
			System.out.println("\t3. Remove");
			System.out.println("\t4. Display");
			System.out.println("\t5. Exit");
			System.out.println("Enter your choice");
			choice = sc.nextInt();
			
			switch(choice) {
				case 1:{
					System.out.println("Enter a roll number: ");
					int data = sc.nextInt();
					rollNumbers.add(data);
					break;
				}
				case 2:{
					System.out.println("Enter index number: ");
					int index = sc.nextInt();
					int data = rollNumbers.get(index);
					System.out.println("Data at index "+index+" : "+data);
					break;
				}
				case 3:{
					break;
				}
				case 4:{
					rollNumbers.display();
					break;
				}
				case 5:{
					System.out.println("Program Exiting!!");
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