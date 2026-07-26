class BankAccount
{
	int accountNumber;
	String holderName;
	double currentBalance;
	double interestRate;
}
class TestBankAccount
{
	public static void main(String[] args)
	{
		BankAccount b1;
		b1 = new BankAccount();
		System.out.println(b1);
	}
}