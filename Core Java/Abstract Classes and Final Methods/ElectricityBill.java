import java.util.Scanner;

abstract class ElectricityBill {
	String customerName;
	int units;
	
	ElectricityBill(String customerName, int units) {
		this.customerName = customerName;
		this.units = units;
	}
	
	void showUsage() {
		System.out.println("Customer name: "+this.customerName);
		System.out.println("Units consumed: "+this.units);
	}
	
	abstract double calculateBill();
	
	final void generateBill() {
		double x=calculateBill();
		double amt=x+(0.05*x)+50;
		System.out.println("Final bill amount: "+amt);
	}
}
class ResidentialBill extends ElectricityBill{
	ResidentialBill(String customerName, int units) {
		super(customerName, units);
	}

	@Override
	double calculateBill() {
		double amt;
		if(units>=0 && units<=100) {
			amt=units*2.5;
		}
		else if(units>=101 && units<=300) {
			amt=units*3.5;
		}
		else {
			amt=units*5;
			if(units>500) {
				amt=amt+150;
			}
		}
		return amt;
	}
}
class CommercialBill extends ElectricityBill{

	CommercialBill(String customerName, int units) {
		super(customerName, units);
	}

	@Override
	double calculateBill() {
		double amt=units*6.5;
		if(units<200) {
			amt=1500;
		}
		else if(units>1000) {
			amt=amt+amt*0.08;
		}
		return amt;
	}
}
class TestBill{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Select Customer Type:\n 1. Residential\n 2. Commercial");
		int choice=sc.nextInt();
		
		if(choice==1) {
			System.out.println("Enter name: ");
			String n=sc.next();
			System.out.println("Enter no of units: ");
			int u=sc.nextInt();
			
			ElectricityBill e1=new ResidentialBill(n, u);
			e1.generateBill();
		}
		else if(choice==2) {
			System.out.println("Enter name: ");
			String n=sc.next();
			System.out.println("Enter no of units: ");
			int u=sc.nextInt();
			
			ElectricityBill e2=new CommercialBill(n, u);
			e2.generateBill();
		}
		sc.close();
	}
}