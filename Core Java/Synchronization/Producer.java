package p1;

public class Producer extends Thread{
	Data d;
	
	public Producer(Data d) {
		this.d=d;
	}
	
	@Override
	public void run() {
		d.produce();
	}
}
