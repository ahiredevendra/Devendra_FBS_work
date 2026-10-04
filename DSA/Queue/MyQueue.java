package com.fbs.demo;

public class MyQueue {
	int size;
	int rear, front;
	int[] queue;
	
	public MyQueue(int size) {
		this.size=size;
		this.front=-1;
		this.rear=-1;
		this.queue=new int[size];
	}
	
	public boolean isEmpty() {
		if(front==-1 && rear==-1)
			return true;
		else
			return false;
	}
	
	public boolean isFull() {
		if((front==0 && rear==size-1) || (rear==front-1))
			return true;
		else
			return false;
	}
	
	public void enqueue(int data) {
		if(isFull()) {
			System.out.println("Queue is Full!!");
		}
		else {
			if(isEmpty()) {
				front=0;
				rear=0;
			}
			else if(rear==size-1) {
				rear=0;
			}
			else {
				rear++;
			}
			queue[rear]=data;
		}
	}
	
	public void dequeue() {
		if(isEmpty()) {
			System.out.println("Queue is Empty!!");
		}
		else {
			int x=queue[front];
			if(front==rear) {
				front=-1;
				rear=-1;
			}
			else if(front==size-1) {
				front=0;
			}
			else {
				front++;
			}
			System.out.println(x+" is deleted!!");
		}
	}
	
	public void peek() {
		if(isEmpty()) {
			System.out.println("Queue is empty!!");
		}
		else {
			System.out.println("Peek Element: "+queue[front]);
		}
	}
	
	public void display() {
		if(isEmpty()) {
			System.out.println("Queue is Empty!!");
		}
		else {
			int i=front;
			while(i!=rear) {
				System.out.println(queue[i]);
				if(i==size-1) {
					i=0;
				}
				else {
					i++;
				}
			}
			System.out.println(queue[i]);
		}
	}
}
