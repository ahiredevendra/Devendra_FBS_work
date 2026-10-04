package com.fbs.demo;

public class MyTree {
	Node root;
	
	public void insert(int data) {
		//create a new node
		Node temp=new Node(data);
		if(root==null) {
			root=temp;
			return;
		}
		Node p=root;
		Node parent=null;
		while(p!=null) {
			if(temp.getData()==p.getData()) {
				System.out.println("Data is duplicate!!");
				return;
			}
			parent=p;
			if(temp.getData()<p.getData()) {
				p=p.getLeft();
			}
			else {
				p=p.getRight();
			}
		}
		if(temp.getData()<parent.getData()) {
			parent.setLeft(temp);
		}
		else {
			parent.setRight(temp);
		}
	}
	
	public void inorder() {
		if(root==null) {
			System.out.println("No nodes to display");
		}
		else {
			inorder(root);
		}
	}
	public void inorder(Node p) {
		if(p!=null) {
			inorder(p.getLeft());
			System.out.println(p.getData());
			inorder(p.getRight());
		}
	}
	
	public void preorder() {
		if(root==null) {
			System.out.println("No nodes to display!!");
		}
		else {
			preorder(root);
		}
	}
	public void preorder(Node p) {
		if(p!=null) {
			System.out.println(p.getData());
			preorder(p.getLeft());
			preorder(p.getRight());
		}
	}
	
	public void postorder() {
		if(root==null) {
			System.out.println("No nodes to display!!");
		}
		else {
			postorder(root);
		}
	}
	public void postorder(Node p) {
		if(p!=null) {
			postorder(p.getLeft());
			postorder(p.getRight());
			System.out.println(p.getData());
		}
	}
}
