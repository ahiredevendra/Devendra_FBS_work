package com.fbs.demo;

public class MyStack {
	int top;
	int size;
	int[] myStack;
	
	public MyStack() {
		this.top=-1;
		this.size=5;
		this.myStack=new int[size];
	}
	
	public boolean isEmpty() {
		if(top==-1)
			return true;
		else
			return false;
	}
	
	public boolean isFull() {
		if(top==size-1)
			return true;
		else
			return false;
	}
	
	public void push(int data) {
		if(isFull()) {
			System.out.println("Stack is full!!");
			return;
		}
		else {
			myStack[++top]=data;
		}
		System.out.println("Data inserted!!");
	}
	
	public void pop() {
		int x;
		if(isEmpty()) {
			System.out.println("Stack is empty!!");
			return;
		}
		else {
			x=myStack[top];
			top--;
		}
		System.out.println(x+" is deleted");
	}
	
	public void peek() {
		if(isEmpty()) {
			System.out.println("Stack is empty!!");
		}
		else {
			System.out.println("Peek Element: "+myStack[top]);
		}
	}
	
	public void display() {
		if(isEmpty()) {
			System.out.println("Stack is empty!!");
		}
		else {
			System.out.println("Stack elements are: ");
			for(int i=top; i>=0; i--) {
				System.out.println("\t"+myStack[i]);
			}
		}
	}
}
