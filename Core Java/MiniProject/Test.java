package MenuDriven;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Test {
	public static void main(String[] args) {
		ArrayList<Employee> a1=new ArrayList<Employee>();
		MyIdComparator m1=new MyIdComparator();
		MyNameComparator m2=new MyNameComparator();
		MySalaryComparator m3=new MySalaryComparator();
		
		Scanner sc = new Scanner(System.in);
		int choice;
		
		do {
			System.out.println("1. Add Employee");
			System.out.println("2. Display Employees");
			System.out.println("3. Search Employee by ID");
			System.out.println("4. Search Employee by Name");
			System.out.println("5. Delete Employee");
			System.out.println("6. Sort Employee by ID");
			System.out.println("7. Sort Employee by Name");
			System.out.println("8. Sort Employee by Salary");
			System.out.println("9. Exit");
		
			System.out.print("Enter your choice: ");
			choice = sc.nextInt();
			
			switch(choice) {
			case 1:{
				System.out.print("Enter ID: ");
				int id = sc.nextInt();
				System.out.print("Enter Name: ");
				String name = sc.next();
				System.out.print("Enter Salary: ");
				double salary = sc.nextDouble();
				Employee e = new Employee(id, name, salary);
				a1.add(e);
				System.out.println("Employee Added Successfully");
				break;
			}
			case 2:{
				if (a1.isEmpty()) {
					System.out.println("Employee List is Empty!");
				}
				else {
					for(int i=0; i<a1.size(); i++) {
						System.out.println(a1.get(i));
						}
				}
				break;
			}
			case 3:{
				System.out.print("Enter Employee ID: ");
				int searchId = sc.nextInt();
		
				boolean foundId = false;
				for (int i=0; i<a1.size(); i++) {
		
					if (a1.get(i).getId() == searchId) {
						System.out.println(a1.get(i));
						foundId = true;
						break;
					}
				}
				if (foundId!=true) {
					System.out.println("Employee Not Found!");
				}
				break;
			}
			case 4:{
				System.out.print("Enter Employee Name: ");
				String searchName = sc.next();
		
				boolean foundName = false;
				for(int i=0; i<a1.size(); i++) {

				    if(a1.get(i).getName().equalsIgnoreCase(searchName)) {

				        System.out.println(a1.get(i));
				        foundName = true;
				        break;
				    }
				}

				if(foundName!=true) {
				    System.out.println("Employee Not Found!");
				}
				break;
			}
			case 5:{
				System.out.print("Enter Employee ID to Delete: ");
				int deleteId = sc.nextInt();
		
				boolean deleted = false;
				for(int i=0; i<a1.size(); i++) {
		
					if(a1.get(i).getId() == deleteId) {
						a1.remove(i);
						deleted = true;
						System.out.println("Employee Deleted Successfully!");
						break;
					}
				}
		
				if(deleted!=true) {
					System.out.println("Employee Not Found");
				}
				break;
			}
			case 6:{
				Collections.sort(a1, m1);
				System.out.println("Employees Sorted By ID");
				break;
			}
			case 7:{
				Collections.sort(a1, m2);
				System.out.println("Employees Sorted By Name");
				break;
			}
			case 8:{
				Collections.sort(a1, m3);
				System.out.println("Employees Sorted By Salary");
				break;
			}
			case 9:{
				System.out.println("Program Exited!!");
				break;
			}
			default:{
				System.out.println("Invalid Choice!!");
			}
			}
			
		} while (choice != 9);
		sc.close();
	}
}
