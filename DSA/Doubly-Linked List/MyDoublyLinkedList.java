package com.fbs.demo;

public class MyDoublyLinkedList {
	Node start;
	
	public void insetAtBeg(int data) {
		Node temp = new Node(data);
		if(start==null) {
			start=temp;
			return;
		}
		temp.next=start;
		start.prev=temp;
		start=temp;
		System.out.println("Node Inserted at Beginning!!");
	}
	public void insertAtEnd(int data) {
		Node temp=new Node(data);
		if(start==null) {
			start=temp;
			return;
		}
		if(start.next==null) {
			temp.prev=start;
			start.next=temp;
			return;
		}
		Node ptr=start;
		while(ptr.next!=null) {
			ptr=ptr.next;
		}
		temp.prev=ptr;
		ptr.next=temp;
		System.out.println("Node Inserted at End!!");
	}
	
	public void deleteFromBeg() {
		if(start==null) {
			System.out.println("List is Empty!!");
			return;
		}
		if(start.next==null) {
			start=null;
			return;
		}
		start=start.next;
		start.prev=null;
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
		Node ptr=start;
		while(ptr.next!=null) {
			ptr=ptr.next;
		}
		ptr.prev.next=null;
	}
	
	public void insertAtPos(int data, int pos) {
		Node temp=new Node(data);
		if(pos<1) {
			System.out.println("Invalid Position!!");
			return;
		}
		if(pos==1) {
			temp.next=start;
			if(start==null) {
				start=temp;
				return;
			}
			start.prev=temp;
			start=temp;
			return;
		}
		int count=0;
		Node ptr=start;
		while(count<pos-1 && ptr!=null) {
			count++;
			ptr=ptr.next;
		}
		temp.next=ptr;
		temp.prev=ptr.prev;
		ptr.prev=temp;
		temp.prev.next=temp;
		System.out.println("Element inserted at "+pos);
	}
	
	public void display() {
		if(start==null) {
			System.out.println("List is Empty!!");
			return;
		}
		if(start.next==null) {
			System.out.println(start.data+"-->NULL");
			return;
		}
		Node ptr = start;
		while(ptr.next!=null) {
			System.out.println(ptr.data+"-->");
			ptr = ptr.next;
		}
		System.out.println(ptr.data+"-->NULL");
	}
	
	
//	public void reverseList() {
//
//	    Node prev = null;
//	    Node ptr = start;
//	    Node next;
//
//	    while (ptr != null) {
//
//	        next = ptr.next;
//	        ptr.next = prev;
//	        prev = ptr;
//	        ptr = next;
//	    }
//
//	    start = prev;
//	}
}
