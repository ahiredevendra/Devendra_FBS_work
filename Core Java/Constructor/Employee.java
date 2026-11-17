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
}








