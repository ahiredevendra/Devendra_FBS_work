package com.fbs.demo;

import java.util.Scanner;

public class MainApp {

	public static void main(String[] args) {
		MyQueue rollNumbers=new MyQueue(5);
		Scanner sc=new Scanner(System.in);
		int choice;
		
		do {
			System.out.println("\t1. Enqueue");
			System.out.println("\t2. Dequeue");
			System.out.println("\t3. Display");
			System.out.println("\t4. Peek");
			System.out.println("\t5. Exit");
			System.out.println("Enter your choice");
			choice = sc.nextInt();
			
			switch(choice) {
				case 1:{
					System.out.println("Enter an element: ");
					int data = sc.nextInt();
					rollNumbers.enqueue(data);
					break;
				}
				case 2:{
					rollNumbers.dequeue();
					break;
				}
				case 3:{
					rollNumbers.display();
					break;
				}
				case 4:{
					rollNumbers.peek();
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
