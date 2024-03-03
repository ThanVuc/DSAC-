#include<iostream>
#include<conio.h>
using namespace std;

struct Node{
	int data;
	Node *next;	
};
Node* Tao(int data, Node *p);
Node* NodeCuoi(Node *L);
Node* NodeKeCuoi(Node *L);
Node* NodeViTri(Node *L);
void in(Node *L);
 

int main(){
	Node *L= new Node;
	L=NULL;
	L= Tao(1,Tao(2,Tao(5,Tao(4,Tao(3,Tao(6,NULL))))));
	cout<<NodeViTri(L)->data;
//	in(L);
	getch();
	return 0;
}

Node* Tao(int data, Node *p){
	Node *q= new Node; q->data= data; q->next= p;
	return q;
}

Node* NodeCuoi(Node *L){
	if (L!=NULL){
		for(Node *p; p!=NULL; p=p->next){
			if (p->next==NULL) return p;
		}
	}
	cout<<"Not Found!";
	return NULL;
}

Node* NodeKeCuoi(Node *L){
	if (L!=NULL){
		for(Node *p; p!=NULL; p=p->next){
			if (p->next->next==NULL) return p;
		}
	}
	cout<<"Not Found!";
	return NULL;
}

Node* NodeViTri(Node *L){
	int i=0; int VT;
	cout<<"Nhap vi tri: "; cin>>VT;
	for (Node* p= L; p!=NULL; p=p->next){
		if (VT==i) return p;
		i++;
	}
	cout<<"Not Found!";
	return NULL;
}


void in(Node *L){
	for(Node *p=L; p!=NULL; p= p->next){
		cout<<p->data<<"  ";
	}
}