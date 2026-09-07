package p1;

class Student{
	int rollNo;
	String name;
	double percentage;
	
	Student(int rollNo, String name, double percentage){
		this.rollNo=rollNo;
		this.name=name;
		this.percentage=percentage;
	}
}
class Employee{
	int id;
	String name;
	double annualSalary;
	
	Employee(int id, String name, double annualSalary){
		this.id=id;
		this.name=name;
		this.annualSalary=annualSalary;
	}
}
class Bank{
	void approveLoan(Student s) {
		if(s.percentage>80) {
			System.out.println("Loan of rs.200000 approved!!");
		}
		else if(s.percentage>=60) {
			System.out.println("Loan of rs.100000 approved!!");
		}
		else if(s.percentage>=40) {
			System.out.println("Loan of rs.50000 approved!!");
		}
		else {
			System.out.println("No loan approved!!");
		}
	}
	
	void approveLoan(Employee e) {
		if(e.annualSalary>1200000) {
			System.out.println("Loan of rs.700000 approved!!");
		}
		else if(e.annualSalary>=1000000) {
			System.out.println("Loan of rs.600000 approved!!");
		}
		else if(e.annualSalary>=600000) {
			System.out.println("Loan of rs.500000 approved!!");
		}
		else if(e.annualSalary>=400000) {
			System.out.println("Loan of rs.400000 approved!!");
		}
		else {
			System.out.println("No Loan approved!!");
		}
	}
}
class TestLoan {
	public static void main(String[] args) {
		Bank b=new Bank();
		
		Student s=new Student(101, "Devendra", 95);
		Employee e=new Employee(201,"Devendra",900000);
		
		b.approveLoan(s);
		b.approveLoan(e);
	}
}
