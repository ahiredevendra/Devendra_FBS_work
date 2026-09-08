
class ElectricityBill {
	static double ratePerUnit=5;
	int customerId;
	String customerName;
	int numberofUnits;
	
	ElectricityBill(int customerId, String customerName, int numberofUnits) {
		this.customerId = customerId;
		this.customerName = customerName;
		this.numberofUnits = numberofUnits;
	}
	
	int getCustomerId() {
		return customerId;
	}

	void setCustomerId(int customerId) {
		this.customerId = customerId;
	}

	String getCustomerName() {
		return customerName;
	}

	void setCustomerName(String customerName) {
		this.customerName = customerName;
	}

	int getNumberofUnits() {
		return numberofUnits;
	}

	void setNumberofUnits(int numberofUnits) {
		this.numberofUnits = numberofUnits;
	}

	static void setElectricityRate(double rPU) {
		ratePerUnit=rPU;
	}
	static double getElecticityRate() {
		return ratePerUnit;
	}
	
	double calculateBill() {
		double billAmt=this.numberofUnits*this.ratePerUnit;
		return billAmt;
	}
}
class TestBill{
	public static void main(String[] args) {
		ElectricityBill e1=new ElectricityBill(101, "Devendra", 87);
		
		double billAmount=e1.calculateBill();
		System.out.println(billAmount);
		}
}