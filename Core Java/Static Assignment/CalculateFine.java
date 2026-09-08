class LibraryUser{
	String userName;
	int numberOfDaysLate;
	static double finePerDay=10;
	
	LibraryUser(String userName, int numberOfDaysLate) {
		this.userName = userName;
		this.numberOfDaysLate = numberOfDaysLate;
	}

	String getUserName() {
		return this.userName;
	}

	void setUserName(String userName) {
		this.userName = userName;
	}

	int getNumberOfDaysLate() {
		return this.numberOfDaysLate;
	}

	void setNumberOfDaysLate(int numberOfDaysLate) {
		this.numberOfDaysLate = numberOfDaysLate;
	}

	static double getFineCharge() {
		return finePerDay;
	}

	static void setFineCharge(double fPD) {
		finePerDay = fPD;
	}
	
	double calculateTotalFine() {
		double totalFine=numberOfDaysLate*finePerDay;
		return totalFine;
	}
	
	
	
}
class CalculateFine {
	public static void main(String[] args) {
		LibraryUser l1=new LibraryUser("Devendra", 5);
		
		double totalFine=l1.calculateTotalFine();
		System.out.println(totalFine);
		}
}
