
class Employee {
	int id;
	String name;
	double salary;
	
	Employee() {
		this.id = 0;
		this.name = "NA";
		this.salary = 0;
	}
	
	Employee(int id, String name, double salary) {
		this.id = id;
		this.name = name;
		this.salary = salary;
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
	
	void display() {
		System.out.println("Id: "+this.id);
		System.out.println("Name: "+this.name);
		System.out.println("Salary: "+this.salary);
	}
	
}
class Admin extends Employee{
	double allowance;
	
	Admin() {
		super();
		this.allowance=0;
	}
	
	Admin(int id, String name, double salary, double allowance) {
		super(id,name,salary);
		this.allowance=allowance;
	}
	
	double getAllowance() {
		return this.allowance;
	}
	void setAllowance(double allowance) {
		this.allowance=allowance;
	}
	void display() {
		super.display();
		System.out.println("Allowance: "+this.allowance);
	}
}
class SalesManager extends Employee{
	double incentive;
	int target;
	
	SalesManager() {
		super();
		this.incentive = 0;
		this.target = 0;
	}
	
	SalesManager(int id, String name, double salary, double incentive, int target) {
		super(id,name,salary);
		this.incentive = incentive;
		this.target = target;
	}

	double getIncentive() {
		return incentive;
	}

	void setIncentive(double incentive) {
		this.incentive = incentive;
	}

	int getTarget() {
		return target;
	}

	void setTarget(int target) {
		this.target = target;
	}
	
	void display() {
		super.display();
		System.out.println("Incentive: "+this.incentive);
		System.out.println("Target: "+this.target);
	}
}
class HR extends Employee{
	double commission;

	HR() {
		super();
		this.commission = 0;
	}
	
	HR(int id, String name, double salary, double commission) {
		super(id,name,salary);
		this.commission = commission;
	}

	double getCommission() {
		return commission;
	}

	void setCommission(double commission) {
		this.commission = commission;
	}
	
	void display() {
		super.display();
		System.out.println("Commission: "+this.commission);
	}
}
class TestEmployee{
	public static void main(String[] args) {
		Admin a1=new Admin(101, "Devendra", 95000, 4000);
		SalesManager s1=new SalesManager(102, "Shyam", 89000, 3000, 5);
		HR h1=new HR(103, "Rohit", 91000, 2000);	
		
		a1.display();
		s1.display();
		h1.display();
		}
}