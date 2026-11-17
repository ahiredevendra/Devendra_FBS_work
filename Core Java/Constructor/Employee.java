class Employee{
	int id;
	String name;
	double salary;
	
	Employee() {
		System.out.println("In default constructor");
		this.id=0;
		this.name = "Not Given";
		this.salary = 0;
	}
	
	Employee(int id, String name, double salary) {
		this.id=id;
		this.name=name;
		this.salary=salary;
	}
	
	int getId() {
		return this.id;
	}
	void setId(int id) {
		this.id = id;
	}
	String getName() {
		return this.name;
	}
	void setName(String name) {
		this.name = name;
	}
	
	void setSalary(double salary) {
		this.salary = salary;
	}
	double getSalary() {
		return this.salary;
	}
	
	public String toString() {
		return "Employee [id=" + id + "\n name=" + name 
				+ "\n salary=" + salary + "]";
	}
	
}//employee class ends here	

class Test{
	public static void main(String[] args) {
		Employee e1=new Employee(101, "Virat", 45000);
	    System.out.println(e1);    
	}
}








