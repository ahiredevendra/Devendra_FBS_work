package p1;

import java.util.HashSet;
import java.util.Objects;

import p2.Employee;

class Employee{   
	int id;
	String name;
	double salary;
	static int count = 0;

	Employee() {
		this.id = 0;
		this.name = "Not Given";
		this.salary = 0;
		count++;
	}

	Employee(int id, String name, double salary) {
		this.id = id;
		this.name = name;
		this.salary = salary;
		count++;
	}

	static int getCount() {
		return count;
	}

	static void setCount(int count) {
		Employee.count = count;
	}

	int getId() {
		return id;
	}

	void setId(int id) {
		this.id = id;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	double getSalary() {
		return salary;
	}

	void setSalary(double salary) {
		this.salary = salary;
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return super.toString();
	}

	@Override
	public int hashCode() {
		System.out.println("In hashCode()");
		return this.id;
	}

	@Override
	public boolean equals(Object obj) {
		System.out.println("Inside equals()");
		Employee e=(Employee)obj;
				return this.id==e.id;
	}
	
	
}
class Test {

	public static void main(String[] args) {
		Employee e1 = new Employee(101, "Devendra", 25000);
		Employee e2 = new Employee(102, "Samarth", 30000);
		Employee e3 = new Employee(103, "Anjali", 35000);
		Employee e4 = new Employee(104, "Vaishnavi", 34000);
		Employee e5 = new Employee(105, "Diksha", 40000);

		HashSet<Employee> h1=new HashSet<Employee>();
		
		h1.add(e1);
		h1.add(e2);
		h1.add(e3);
		h1.add(e4);
		h1.add(e5);
		
		System.out.println(h1.contains(new Employee(101, "Devendra", 25000)));
	}

}
