#include<iostream>
#include<conio.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

void nhap(Node *&L, int n);
void in(Node *L);
Node* t(int data, Node *p);
void xoa(Node *&L, Node *p);
void chen(Node *&L, Node *k, Node *p);

int main(){
	Node *L= NULL;
	L= t(1,t(2,t(3,t(4,t(5,NULL)))));
	Node *p= L->next->next->next->next->next;
	Node *k= t(100,NULL);
	chen(L,k,p);
	in(L);
	getch();
	return 0;
}

void in(Node *L){
	for(Node *p=L; p!=NULL ; p= p->next) cout<<p->data<<"  ";	
}

Node* t(int data, Node *p){
	Node *q= new Node(); q->data=data; q->next = p; return q;
}

void xoa(Node *&L, Node* p){
	if (L==NULL) return;
	if (p==L){
		L=p->next;
	} else{
		if (p!=NULL)
			for(Node *q=L; q!=NULL;q=q->next){
				if (q->next==p){
					q->next= p->next;
					return;
				}
		}
	}
	delete(p);
}

void chen(Node *&L, Node *k, Node *p){
	if (L==p){
		L= k;
		k->next= p;
	} else{
		Node *q=L;
		while(q->next!=p){
			q=q->next;
		}
		q->next= k;
		k->next= p;
	}
}

//void nhap(Node *&L, int n){
//	Node *p, *q;
//	
//	for(int i=1; i<=n; i++){
//		p= new Node();
//		cout<<"Nhap gia tri "<<i<<": "; cin>>p->data;
//		p->next= NULL;
//		if (L==NULL)
//			L=p;
//		else q->next= p; 
//		q=p;
//	}
//	
//}