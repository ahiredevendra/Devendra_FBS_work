package p1;

public class Test {
	public static void main(String[] args) {
		Data d1=new Data();
		
		Producer p1=new Producer(d1);
		Consumer  c1=new Consumer(d1);
		c1.start();
		p1.start();
		
		try {
			c1.join();
			p1.join();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		 
		System.out.println("Main Ended!!!");
	}
}
