package com.fbs.demo;

public class SinglyLinkedList {
	Node start;
	
	public void insertAtBeg(int ele) {
		Node temp=new Node(ele);
		temp.next=start;
		start=temp;
	}
	
	public void insertAtEnd(int ele) {
		Node temp=new Node(ele);
		if(start==null) {
			start=temp;
			return;
		}
		if(start.next==null) {
			start.next=temp;
			return;
		}
		Node ptr=start;
		while(ptr.next!=null) {
			ptr=ptr.next;
		}
		ptr.next=temp;
	}
	
	public void deleteFromBeg() {
		if(start==null) {
			System.out.println("List is Empty!!");
			return;
		}
		start=start.next;
		System.out.println("Node Deleted!!");
	}
	
	public void deleteFromEnd() {
		if(start==null) {
			System.out.println("List is Empty!!");
			return;
		}
		if(start.next==null) {
			start=null;
			return;
		}
		Node temp=start;
		while(temp.next.next!=null) {
			temp=temp.next;
		}
		temp.next=null;
		//temp.next=temp.next.next;
	}
}