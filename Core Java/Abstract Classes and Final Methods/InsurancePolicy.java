import java.util.Scanner;

abstract class InsurancePolicy{
	String policyHolderName;
	double basePremium;
	InsurancePolicy(String policyHolderName, double basePremium) {
		this.policyHolderName = policyHolderName;
		this.basePremium = basePremium;
	}
	
	abstract double calculatePremium();
	
	void printPolicyDetails() {
		System.out.println("Policy holder name: "+this.policyHolderName);
		System.out.println("Base Premium: "+this.basePremium);
		System.out.println("Final Premium: "+calculatePremium());
	}
}
class CarInsurance extends InsurancePolicy{
	int carAgeInYears;
	boolean hadAccidentInLastYear;
	double carValue;
	
	CarInsurance(String policyHolderName, double basePremium, int carAgeInYears, boolean hadAccidentInLastYear,double carValue) {
		super(policyHolderName, basePremium);
		this.carAgeInYears = carAgeInYears;
		this.hadAccidentInLastYear = hadAccidentInLastYear;
		this.carValue = carValue;
	}

	@Override
	double calculatePremium() {
		double premium=basePremium;
		
		if(carAgeInYears<=3) {
			premium=premium+(premium*0.1);
		}
		else if(carAgeInYears>=4 && carAgeInYears<=7) {
			premium=premium+(premium*0.2);
		}
		else {
			premium=premium+(premium*0.3);
		}
		
		if(hadAccidentInLastYear==true) {
			premium=premium+(premium*0.25);
		}
		else {
			premium=premium-(premium*0.1);
		}
		
		if(carValue>1000000) {
			premium=premium+2000;
		}
		return premium;
	}
}
class HealthInsurance extends InsurancePolicy{
	int age;
	boolean isSmoker;
	boolean hasPreExistingDisease;
	
	HealthInsurance(String policyHolderName, double basePremium, int age, boolean isSmoker, boolean hasPreExistingDisease) {
		super(policyHolderName, basePremium);
		this.age=age;
		this.isSmoker=isSmoker;
		this.hasPreExistingDisease=hasPreExistingDisease;
	}

	@Override
	double calculatePremium() {
		double premium=basePremium;
		
		if(age<30) {
			premium=premium+(premium*0.1);
		}
		else if(age>=30 && age<=45) {
			premium=premium+(premium*0.25);
		}
		else {
			premium=premium+(premium*0.4);
		}
		
		if(isSmoker==true) {
			premium=premium+(premium*0.3);
		}
		else {
			premium=premium-(premium*0.05);
		}
		
		if(hasPreExistingDisease==true) {
			premium=premium+(premium*0.2);
		}
		return premium;
	}	
}
class TestInsurance{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int choice;
		
		System.out.println("1. Car Insurance");
		System.out.println("2. Health Insurance");
		System.out.println("Enter choice: ");
		choice=sc.nextInt();
		
		if(choice==1) {
			System.out.println("Policy Holder Name: ");
			String name=sc.next();
			
			System.out.println("Base Premium: ");
			double basePre=sc.nextDouble();
			
			System.out.println("Car Age in years: ");
			int carAge=sc.nextInt();
			
			System.out.println("Had Accident in last year(true or false): ");
			boolean hadAccident=sc.nextBoolean();
			
			System.out.println("Car value: ");
			int value=sc.nextInt();
			
			InsurancePolicy i=new CarInsurance(name, basePre, carAge, hadAccident, value);
			i.printPolicyDetails();
		}
		else if(choice==2) {
			System.out.println("Policy Holder Name: ");
			String name=sc.next();
			
			System.out.println("Base Premium: ");
			double basePre=sc.nextDouble();
			
			System.out.println("Age: ");
			int age1=sc.nextInt();
			
			System.out.println("Is Smoker(true or false): ");
			boolean smoker=sc.nextBoolean();
			
			System.out.println("Has pre-existing disease(true or false): ");
			boolean hasDisease=sc.nextBoolean();
			
			InsurancePolicy i=new HealthInsurance(name, basePre, age1, smoker, hasDisease);
			i.printPolicyDetails();
		}
		else {
			System.out.println("Invalid choice!!");
		}
		sc.close();
	}
}