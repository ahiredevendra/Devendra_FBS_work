
class Employee {
	String empName;
	double salary;
	static double bonusRate=20;
	
	Employee(String empName, double salary) {
		this.empName = empName;
		this.salary = salary;
	}

	String getEmpName() {
		return empName;
	}

	void setEmpName(String empName) {
		this.empName = empName;
	}

	double getSalary() {
		return salary;
	}

	void setSalary(double salary) {
		this.salary = salary;
	}

	static double getBonusRate() {
		return bonusRate;
	}

	static void setBonusRate(double bR) {
		bonusRate = bR;
	}
	
	double calculateTotalSalary() {
		double totalSalary=salary+(this.salary*bonusRate/100);
		return totalSalary;
	}

}
class TestSalary{
	public static void main(String[] args) {
		Employee e1=new Employee("Devendra", 100000);
		
		double totalSalary=e1.calculateTotalSalary();
		System.out.println(totalSalary);
	}
}