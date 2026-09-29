package p1;

abstract public class Employee {
	protected int id;
	protected String name;
	protected double salary;
	
	public Employee(int id, String name, double salary) {
		this.id = id;
		this.name = name;
		this.salary = salary;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public double getSalary() {
		return salary;
	}

	public void setSalary(double salary) {
		this.salary = salary;
	}
	
	abstract public double calSal();
	
	public String toString() {
		return "ID: "+this.id+
				"\nName: "+this.name+
				"\nSalary: "+this.salary;
	}	
}
