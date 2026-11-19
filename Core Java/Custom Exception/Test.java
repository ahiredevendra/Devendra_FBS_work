package p1;

class InvalidAgeException extends Exception{

	public InvalidAgeException(String message) {
		super(message);
	}
	
}
class Voter {
	int age;
	
	public Voter(int age) {
		this.age=age;
	}
	
	void validateAge() throws InvalidAgeException {
		if(this.age>=18) {
			System.out.println("You are eligible to vote");
		}
		else {
			throw new InvalidAgeException("You are not eligible to vote");
		}
	}
}
public class Test {

	public static void main(String[] args) {
		Voter v1 = new Voter(17);
		try {
			v1.validateAge();
		}
		catch(InvalidAgeException ie) {
			System.out.println(ie.getMessage());
			ie.printStackTrace();
		}
	}

}
