abstract class Payment {
	int paymentId;
	double amount;
	String payerName;
	String status;
	Payment(int paymentId, double amount, String payerName) {
		this.paymentId = paymentId;
		this.amount = amount;
		this.payerName = payerName;
		this.status = "Pending";
	}
	
	void printSummary() {
		System.out.println("Payment Id: "+this.paymentId);
		System.out.println("Amount: "+this.amount);
		System.out.println("Payer Name: "+this.payerName);
		System.out.println("Status: "+this.status);
	}
	
	final void process() {
		if(validate()) {
			deductAmount();
			sendNotification();
			status="Success";
		}
		else {
			status="Failed";
		}
	}

	abstract boolean validate();
	abstract void deductAmount();
	abstract void sendNotification();
}
class CardPayment extends Payment{
	String cardNumber;
	String cvv;
	
	CardPayment(int paymentId, double amount, String payerName, String cardNumber, String cvv) {
		super(paymentId, amount, payerName);
		this.cardNumber=cardNumber;
		this.cvv=cvv;
	}

	@Override
	boolean validate() {
		if(cardNumber.length()!=16) {
			System.out.println("Invalid card number!!");
			return false;
		}
		if(cvv.length()!=3) {
			System.out.println("Invalid CVV number!!");
			return false;
		}
		if(amount<=0) {
			System.out.println("Invalid Amount!!");
			return false;
		}
		return true;
	}

	@Override
	void deductAmount() {
		System.out.println("Amount "+this.amount+" deducted from card");
	}

	@Override
	void sendNotification() {
		System.out.println("Card payment Success!!");
	}
	
	
}
class UPIPayment extends Payment{
	String upiId;
	
	UPIPayment(int paymentId, double amount, String payerName, String upiId) {
		super(paymentId, amount, payerName);
		this.upiId=upiId;
	}

	@Override
	boolean validate() {
		if(upiId.contains("@")==false) {
			System.out.println("Invalid UPI Id!!");
			return false;
		}
		if(amount<1 || amount>100000) {
			System.out.println("Invalid amount!!");
			return false;
		}
		return true;
	}

	@Override
	void deductAmount() {
		System.out.println("Amount "+this.amount+" deducted from UPI");
	}

	@Override
	void sendNotification() {
		System.out.println("UPI Payment successful!!");
	}
	
	
}
class TestPayment{
	public static void main(String[] args) {
		Payment p1=new CardPayment(101, 5000, "Devendra", "1234567890123456", "123");
		Payment p2=new UPIPayment(102, 2500, "Shyam", "shyam@upi");
		
		p1.process();
		p1.printSummary();
		
		p2.process();
		p2.printSummary();
	}
}