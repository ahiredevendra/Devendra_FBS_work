package p1;

import java.util.HashMap;
import java.util.TreeMap;

class Employee{
	int id;
	String name;
	double salary;
	static int count = 0;

	Employee() {
		this.id = 0;
		this.name = "Not Given";
		this.salary = 0;
		count++;
	}

	Employee(int id, String name, double salary) {
		this.id = id;
		this.name = name;
		this.salary = salary;
		count++;
	}

	static int getCount() {
		return count;
	}

	static void setCount(int count) {
		Employee.count = count;
	}

	int getId() {
		return id;
	}

	void setId(int id) {
		this.id = id;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	double getSalary() {
		return salary;
	}

	void setSalary(double salary) {
		this.salary = salary;
	}
	
	public String toString() {
		return "ID: " + this.id + "\nName: " + this.name + "\nSalary: " + this.salary +"\n";
	}
}
class Mykey implements Comparable<Mykey>{
	int key;
	
	public Mykey(int key) {
		this.key=key;
	}
	@Override
	public String toString() {
		return "key: "+this.key;
	}
	@Override
	public int compareTo(Mykey o) {
		System.out.println("In compareTo");
		return this.key-o.key;
	}
	@Override
	public int hashCode() {
		return this.key;
	}
	@Override
	public boolean equals(Object obj) {
		Mykey k=(Mykey)obj;
		return this.key==k.key;
	}
	
}
class Test {

	public static void main(String[] args) {
		Employee e1 = new Employee(101, "Devendra", 25000);
		Employee e2 = new Employee(104, "Samarth", 30000);
		Employee e3 = new Employee(103, "Anjali", 35000);
		Employee e4 = new Employee(105, "Vaishnavi", 34000);
		Employee e5 = new Employee(102, "Diksha", 40000);
		
		HashMap<Mykey, Employee> t1=new HashMap<Mykey, Employee>();
		t1.put(new Mykey(101),e1);
		t1.put(new Mykey(104),e2);
		t1.put(new Mykey(103),e3);
		t1.put(new Mykey(105),e4);
		t1.put(new Mykey(102),e5);
		
		System.out.println(t1);
	}

}
