package p1;

import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

import p1.Employee;

public class Test {

	public static void main(String[] args) {
		try {
			FileInputStream fis=new FileInputStream("demo.txt");
			ObjectInputStream ois=new ObjectInputStream(fis);
			Employee e1=(Employee)ois.readObject();
			System.out.println("Object read Successfully!!");
			System.out.println(e1);
		} catch(FileNotFoundException e) {
			
		} catch(IOException e) {
			
		} catch(ClassNotFoundException e) {
			
		}
	}
}
