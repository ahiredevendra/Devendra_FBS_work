class Product
{
	int productId;
	String productName;
	double price;
	int quantity;
}
class TestProduct
{
	public static void main(String[] args)
	{
		Product p1;
		p1 = new Product();
		System.out.println(p1);
	}
}