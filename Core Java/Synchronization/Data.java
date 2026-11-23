package p1;

public class Data {
	int value;
	boolean isAvailable;
	
	synchronized void consume() {
		while(!isAvailable) {
			System.out.println("Consumer Waiting!!!");
			try {
				wait();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		System.out.println("Consumed: "+this.value);
		isAvailable=false;
	}
	synchronized void produce() {
		try {
			Thread.sleep(2000);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		this.value=100;
		System.out.println("Producing value!!!");
		try {
			Thread.sleep(2000);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		System.out.println("Value Produced: "+this.value);
		isAvailable=true;
		System.out.println("Notifying Consumer!!!");
		try {
			Thread.sleep(2000);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		notify();
	}
}
