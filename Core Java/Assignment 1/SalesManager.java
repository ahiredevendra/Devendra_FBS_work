class SalesManager
{
	int id;
	String name;
	double salary;
	double incentive;
	int target;
}
class TestSalesManager
{
	public static void main(String[] args)
	{
		SalesManager s1;
		s1 = new SalesManager();
		System.out.println(s1);
	}
}