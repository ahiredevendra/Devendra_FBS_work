package com.fbs.demo;

public class Node {
	Node prev; 
	int data;
	Node next;
	
	Node(int data){
		this.data=data;
		this.prev=prev;
		this.next=next;
	}
	
	public int getData() {
		return data;
	}

	public void setData(int data) {
		this.data = data;
	}

	public Node getNext() {
		return next;
	}

	public void setNext(Node next) {
		this.next = next;
	}

	public Node getPrev() {
		return prev;
	}

	public void setPrev(Node prev) {
		this.prev = prev;
	}

}
