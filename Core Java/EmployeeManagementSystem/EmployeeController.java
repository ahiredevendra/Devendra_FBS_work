package controller;

import java.util.ArrayList;
import java.util.List;

import model.Employee;
import view.EmployeeView;

public class EmployeeController {

    List<Employee> employees = new ArrayList<>();

    EmployeeView view;

    public EmployeeController(EmployeeView view) {
        this.view = view;
    }

    public void start() {

        boolean running = true;

        while (running) {

            int choice = view.showMenu();

            switch (choice) {

                case 1:
                    addEmployee();
                    break;

                case 2:
                    view.displayEmployees(employees);
                    break;

                case 3:
                    searchEmployee();
                    break;

                case 4:
                    deleteEmployee();
                    break;

                case 5:
                    running = false;
                    view.displayMessage("Application closed.");
                    break;

                default:
                    view.displayMessage("Invalid choice.");
            }
        }
    }

    void addEmployee() {

        Employee employee = view.getEmployeeDetails();

        employees.add(employee);

        view.displayMessage("Employee added successfully.");
    }

    void searchEmployee() {

        int id = view.getEmployeeId();

        for (Employee e : employees) {

            if (e.getId() == id) {
                view.displayEmployee(e);
                return;
            }
        }

        view.displayEmployee(null);
    }

    void deleteEmployee() {

        int id = view.getEmployeeId();

        for (Employee e : employees) {

            if (e.getId() == id) {
                employees.remove(e);
                view.displayMessage("Employee deleted successfully.");
                return;
            }
        }

        view.displayMessage("Employee not found.");
    }
}