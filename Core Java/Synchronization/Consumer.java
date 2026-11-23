package p1;

public class Consumer extends Thread{
	Data d;
	
	public Consumer(Data d) {
		this.d=d;
	}
	
	@Override
	public void run() {
		d.consume();
	}
}
