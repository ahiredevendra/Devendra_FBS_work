package p1;

public class MyDoublyLinkedList {
	Node start;
	
	public void Insert(int ele) {
		Node temp=new Node(ele);
		if(start==null) {
			start=temp;
			return;
		}
		if(start.data>ele) {
			temp.next=start;
			start.prev=temp;
			start=temp;
			return;
		}
		Node ptr=start;
		while(ptr.next!=null && ptr.next.data<ele) {
			ptr=ptr.next;
		}
		temp.next=ptr.next;
		temp.prev=ptr;
		if(ptr.next!=null) {
			ptr.next.prev=temp;
		}
		ptr.next=temp;
	}
	
	public void display() {
		if(start==null) {
			System.out.println("List is Empty!!");
			return;
		}
		Node ptr=start;
		while(ptr!=null) {
			System.out.println(ptr.data);
			ptr=ptr.next;
		}
	}
	public void deleteEle(int ele) {
		if(start==null) {
			System.out.println("List is Empty!!");
			return;
		}
		Node ptr=start;
		while(ptr!=null) {
			if(ptr.data==ele) {
				if(ptr==start) {
					start=start.next;
					if(start!=null) {
						start.prev=null;
					}
					System.out.println("Element deleted!!");
					return;
				}
				else {
					ptr.prev.next=ptr.next;
					if(ptr.next!=null) {
						ptr.next.prev=ptr.prev;
					}
					System.out.println("Element deleted!!");
					return;
				}
			}
			ptr=ptr.next;
		}
		System.out.println("Element not found!!");
	}
}
