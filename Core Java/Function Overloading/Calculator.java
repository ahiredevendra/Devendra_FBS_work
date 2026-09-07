package p1;

class Calculator
{
	void add(int a, int b){
		System.out.println(a+b);
	}
	void add(double a, double b){
		System.out.println(a+b);
	}
	void add(int a, double b){
		System.out.println(a+b);
	}
	void add(double a, int b){
		System.out.println(a+b);
	}

	void sub(int a, int b){
		System.out.println(a-b);
	}
	void sub(double a, double b){
		System.out.println(a-b);
	}
	void sub(int a, double b){
		System.out.println(a-b);
	}
	void sub(double a, int b){
		System.out.println(a-b);
	}

	void mul(int a, int b){
		System.out.println(a*b);
	}
	void mul(double a, double b){
		System.out.println(a*b);
	}
	void mul(int a, double b){
		System.out.println(a*b);
	}
	void mul(double a, int b){
		System.out.println(a*b);
	}

	void div(int a, int b){
		System.out.println(a/b);
	}
	void div(double a, double b){
		System.out.println(a/b);
	}
	void div(int a, double b){
		System.out.println(a/b);
	}
	void div(double a, int b){
		System.out.println(a/b);
	}
	
	
}
class TestCalculator
{
	public static void main(String args[])
	{
		Calculator c1,c2,c3,c4;        //Reference

		c1 = new Calculator();
		c1.add(10,10);
		c1.add(10.5,10);
		c1.add(20,10.4);
		c1.add(2.5,12.4);

		c2 = new Calculator();
		c2.sub(30,10);
		c2.sub(10.5,10);
		c2.sub(20,10.4);
		c2.sub(12.4,2.5);

		c3 = new Calculator();
		c3.mul(10,10);
		c3.mul(10.5,10);
		c3.mul(20,10.4);
		c3.mul(5.2,2.5);

		c4 = new Calculator();
		c4.div(20,5);
		c4.div(20.4,4);
		c4.div(20,4.5);
		c4.div(20.4,2.2);
	}
}