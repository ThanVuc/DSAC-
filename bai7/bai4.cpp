#include<iostream>
#include<conio.h>
using namespace std;

struct Node{
	int data;
	Node *next;	
};
Node* Tao(int data, Node *p);
void in(Node *L);
void ChenVT(Node *&L);

int main(){
	Node *L= new Node;
	L=NULL;
	L= Tao(1,Tao(2,Tao(5,Tao(4,Tao(3,Tao(6,NULL))))));
	in(L);
	ChenVT(L);
	in(L);
	getch();
	return 0;
}

Node* Tao(int data, Node *p){
	Node *q= new Node; q->data= data; q->next= p;
	return q;
}

void ChenVT(Node *&L){
	int VT; cout<<"\nNhap vi tri can chen: "; cin>>VT;
	int GT; cout<<"Nhap gia tri can chen: "; cin>>GT;
	Node *q= new Node;
	q->data= GT;
	if (L==NULL){
		if (VT!=0) cout<<"Vi tri khong hop le!";
		else {
			L=q;
			q->next= NULL;
			return;
		}
	}
	if (VT==0){
		q->next= L;
		L=q;
		return;
	}
	Node *p= L; int i=0;
	while(1){
		if (VT==i+1){
			q->next= p->next;
			p->next= q;
			return;
		}
		if (p==NULL){
			if (VT!=0) cout<<"Vi tri khong hop le!";
			return;
		}
		
		p=p->next;
		i++;
	}
	
}

void in(Node *L){
	for(Node *p=L; p!=NULL; p= p->next){
		cout<<p->data<<"  ";
	}
}