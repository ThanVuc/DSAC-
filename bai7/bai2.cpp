#include<iostream>
#include<conio.h>
using namespace std;

struct Node{
	int data;
	Node *next;	
};
Node* Tao(int data, Node *p);
void in(Node *L);
 

int main(){
	Node *L= new Node;
	L=NULL;
	L= Tao(1,Tao(2,Tao(3,Tao(4,Tao(5,NULL)))));
	in(L);
	getch();
	return 0;
}

Node* Tao(int data, Node *p){
	Node *q= new Node; q->data= data; q->next= p;
	return q;
}


void in(Node *L){
	for(Node *p=L; p!=NULL; p= p->next){
		cout<<p->data<<"  ";
	}
}