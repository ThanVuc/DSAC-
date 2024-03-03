#include<iostream>
#include<conio.h>
using namespace std;

struct Node{
	int data;
	Node *next;	
};
Node* Tao(int data, Node *p);
void in(Node *L);
void XoaVT(Node *&L);

int main(){
	Node *L= new Node;
	L=NULL;
	L= Tao(1,Tao(2,Tao(5,Tao(4,Tao(3,Tao(6,NULL))))));
	in(L);
	XoaVT(L);
	in(L);
	getch();
	return 0;
}

Node* Tao(int data, Node *p){
	Node *q= new Node; q->data= data; q->next= p;
	return q;
}

void XoaVT(Node *&L){
	int VT; cout<<"\nNhap vi tri can xoa: "; cin>>VT;
	int i=0; Node *p=L;
	if (VT==0){
		L= L->next;
		return;
	}
	while(p!=NULL){
		if (i+1==VT){
			p->next= p->next->next;
			return;
		}
		p= p->next;
	}
}

void in(Node *L){
	for(Node *p=L; p!=NULL; p= p->next){
		cout<<p->data<<"  ";
	}
}