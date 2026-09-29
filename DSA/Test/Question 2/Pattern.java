package p2;

public class Pattern {
	public static void main(String[] args) {
		int i;
		int j;
		
		for(i=0; i<5; i++) {
			for(j=i; j<5; j++) {
				System.out.print((char)('A'+j));
			}
			System.out.println();
		}
		
		for(i=3; i>=0; i--) {
			for(j=i; j<5; j++) {
				System.out.print((char)('A'+j));
			}
			System.out.println();
		}
	}
}