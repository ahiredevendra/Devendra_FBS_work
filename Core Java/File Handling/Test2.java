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
		Employee e1=new Employee(101,"Devendra",24000);
		
		try {
			FileOutputStream fos = new FileOutputStream("demo.txt");
			DataOutputStream dos=new DataOutputStream(fos);
			ObjectOutputStream oos=new ObjectOutputStream(dos);
			oos.writeObject(e1);
			System.out.println("Object written Successfully!!");
		} catch(FileNotFoundException e) {
			
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}		
	}
}
