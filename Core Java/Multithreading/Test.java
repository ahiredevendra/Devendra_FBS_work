package p1;

class Worker extends Thread{
	public void run() {
		String alphabets="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		for(int i=0; i<alphabets.length(); i++) {
			System.out.println(alphabets.charAt(i)+" ");
			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}
public class Test {
	public static void main(String[] args) {
		Worker w1=new Worker();
		w1.start();
		String numbers="12345678901234567890123456789";
		for(int i=0; i<numbers.length(); i++) {
			System.out.println(numbers.charAt(i)+" ");
			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		System.out.println(" Main Ended ");
	}
}
