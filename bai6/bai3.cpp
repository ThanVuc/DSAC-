#include<iostream>
#include<conio.h>
using namespace std;

struct Node{
	int data;
	Node *next=NULL;
};

struct Stack{
	Node *L= new Node();
	
	bool isEmpty(){
		return L->next==NULL;
	}
	
	int top(){
		return L->data;
	}
	
	void push(int x){
		//Tao Node tam thoi co data=x de do ton cong de truyen thang node vao ham push
		Node *q= new Node();
		q->data=x;
		//Truyen nguoc
		q->next= L;
		L = q;
	}
	
	void pop(){
		L= L->next;
	}
};

int main(){
	Stack st;
	cout<<st.isEmpty()<<"\n";
	st.push(10);
	st.push(11);
	cout<<st.top()<<"\n";
	st.pop();
	cout<<st.isEmpty()<<"\n";
	cout<<st.top();
	getch();
	return 0;
}