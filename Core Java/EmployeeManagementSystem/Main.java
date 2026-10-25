package main;

import controller.EmployeeController;
import view.EmployeeView;

public class Main {

    public static void main(String[] args) {

        EmployeeView view = new EmployeeView();

        EmployeeController controller =
                new EmployeeController(view);

        controller.start();
    }
}