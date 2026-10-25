package view;

import java.util.Scanner;
import model.Employee;

public class EmployeeView {

    Scanner sc = new Scanner(System.in);

    public int showMenu() {

        System.out.println("\n--- Employee Management System ---");
        System.out.println("1. Add Employee");
        System.out.println("2. View All Employees");
        System.out.println("3. Search Employee");
        System.out.println("4. Delete Employee");
        System.out.println("5. Exit");

        System.out.print("Enter your choice: ");

        return sc.nextInt();
    }

    public Employee getEmployeeDetails() {

        System.out.print("Enter Employee ID: ");
        int id = sc.nextInt();

        sc.nextLine();

        System.out.print("Enter Employee Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Employee Salary: ");
        double salary = sc.nextDouble();

        return new Employee(id, name, salary);
    }

    public int getEmployeeId() {

        System.out.print("Enter Employee ID: ");
        return sc.nextInt();
    }

    public void displayEmployee(Employee e) {

        if (e == null) {
            System.out.println("Employee not found.");
            return;
        }

        System.out.println("ID: " + e.getId());
        System.out.println("Name: " + e.getName());
        System.out.println("Salary: " + e.getSalary());
    }

    public void displayMessage(String message) {
        System.out.println(message);
    }

    public void displayEmployees(java.util.List<Employee> employees) {

        if (employees.isEmpty()) {
            System.out.println("No employees available.");
            return;
        }

        for (Employee e : employees) {
            displayEmployee(e);
            System.out.println("-------------------");
        }
    }
}