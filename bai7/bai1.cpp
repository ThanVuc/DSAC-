#include<iostream>
#include<conio.h>
using namespace std;

struct Node{
	int data;
	Node *next;	
};
void nhap(Node *&L);
void in(Node *L);

int main(){
	Node *L= new Node;
	L=NULL;
	nhap(L);
	in(L);
	getch();
	return 0;
}

void nhap(Node *&L){
	Node *q; int i=1;
	while (true){
		int x; 
		cout<<"L["<<i<<"]= "; cin>>x;
		Node *p= new Node;
		p->data= x;
		if (x==0) break;
		if (L==NULL){
			L=p;
			p->next=NULL;
		} else {
			q->next= p;
			p->next= NULL;
		}
		q=p;
		i++;
	}
}

void in(Node *L){
	for(Node *p=L; p!=NULL; p= p->next){
		cout<<p->data<<"  ";
	}
}







