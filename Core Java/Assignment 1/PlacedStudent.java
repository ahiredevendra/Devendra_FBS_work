class PlacedStudent
{
	String frn;
	String studentName;
	double distanceCovered;
	String companyName;
	String designation;
}
class TestPlacedStudent
{
	public static void main(String[] args)
	{
		PlacedStudent p1;           //Reference
		p1 = new PlacedStudent();
			System.out.println(p1);
	}
}