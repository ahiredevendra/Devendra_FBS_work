package p1;

interface Racer{
	void Race();
}
interface Product{
	void buy();
	void sell();
}
class Vehicle implements Product{
	public void buy() {
		System.out.println("Vehicle is bought!!");	
	}
	public void sell() {
		System.out.println("Vehicle is sold!!");
	}
	
}
class Bike extends Vehicle implements Racer{
	public void Race() {
		System.out.println("Racing with Bike!!");	
	}
	
}
class Car extends Vehicle implements Racer{
	public void Race() {
		System.out.println("Racing with Car!!");	
	}
	
}
class Bus extends Vehicle{	
	
}

class Animal{
	
}
class Buffalo extends Animal implements Racer, Product{
	public void buy() {
		System.out.println("Buffalo is bought!!");
	}
	public void sell() {
		System.out.println("Buffalo is sold");
	}
	public void Race() {
		System.out.println("Racing with Buffalo!!");	
	}
	
}
class Horse extends Animal implements Racer, Product{
	public void buy() {
		System.out.println("Horse is bought!!");
	}
	public void sell() {
		System.out.println("Horse is sold");
	}
	public void Race() {
		System.out.println("Racing with Horse!!");	
	}
	
}
class Ox extends Animal implements Racer, Product{
	public void buy() {
		System.out.println("Ox is bought!!");
	}
	public void sell() {
		System.out.println("Ox is sold");
	}
	public void Race() {
		System.out.println("Racing with Ox!!");	
	}
	
}
class Cow extends Animal implements Product{
	public void buy() {
		System.out.println("Cow is bought!!");
	}
	public void sell() {
		System.out.println("Cow is sold");
	}
	
}
class Lion extends Animal{
	
}

public class Test{
	public static void main(String[] args) {
		Racer r1;
		r1=new Bike();
		r1.Race();
	}
}