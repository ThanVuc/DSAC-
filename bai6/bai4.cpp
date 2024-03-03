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

int Sum(int n);

int main(){
	cout<<Sum(100);
	getch();
	return 0;
}

int Sum(int n){
	int sum=0;
	Stack st; st.push(n);
	while (st.top()!=0){
		sum+=st.top();
		st.push(st.top()-1);
	}
	return sum;
}








