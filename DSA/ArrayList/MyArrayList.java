package com.fbs.demo;

public class MyArrayList {
	int[] arr;
	int index;
	int size;
	
	public MyArrayList() {
		this.size=10;
		this.arr = new int[10];
		this.index = -1;
	}
	
	boolean isEmpty() {
		if(index==-1)
			return true;
		else
			return true;
	}
	
	int checkSize() {
		int pos=size*75/100;
		return pos;
	}
	
	int[] resize() {
		size=size*3/2;
		int[] temp=new int[size];
		for(int i=0; i<=index; i++) {
			temp[i]=arr[i];
		}
		return temp;
	}
	
	void add(int data) {
		if(this.isEmpty()) {
			arr[++index]=data;
			System.out.println("Data Added!!");
			return;
		}
		if(this.checkSize()-1==index) {
			arr=this.resize();
		}
		arr[++index]=data;
		System.out.println("Data inserted!!");
	}
	
	public int get(int i){
		if((i<0) || (i<=size))
			throw new IndexOutOfBoundsException();
		return arr[i];
	}
	
	public int remove(int i) {
		if((i<0) || (i>=size)) {
			throw new IndexOutOfBoundsException();
		}
		int remEle = arr[i];
		for(int j=i; j<index; j++) {
			arr[j]=arr[j+1];
		}
		index--;
		return remEle;
	}
	
	public void display() {
		System.out.println("ArrayList Elements: ");
		for(int i=0; i<=index;i++) {
			System.out.println("\t"+arr[i]);
		}
	}
}