package model;

public class Employee {

    int id;
    String name;
    double salary;

    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }
    
    public String toString() {
    	return "Id: "+this.id+"Name: "+this.name+"Salary: "+this.salary;
    }
}