package MenuDriven;

public class Employee {
	int id;
	String name;
	double salary;
	public Employee(int id, String name, double salary) {
		super();
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
	
	@Override
	public boolean equals(Object obj) {
		Employee e1=(Employee)obj;
		System.out.println("Inside equals");
		if(this.id==e1.id) {
			return true;
		}else {
			return false;
		}
		
	}
	
	@Override
	public String toString() {
		return "id: "+this.id + "\nName: "+this.name + "\nSalary: "+this.salary+"\n";
	}
}
