#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *left= NULL, *right= NULL;
};

void chen(node *&T, node *p);
void nhap(node *&T, int a[], int n);
node* NodeX(node *T, int x);

int main(){
	node *T= NULL;
	int a[]={5,1,2,6,4,9,8,7,10,3}, n=10;
	nhap(T,a,n);
	if (NodeX(T,12)!=NULL) cout<<NodeX(T,13)->data;
	else cout<<"NULL";
	getch();
	return 0;
}

void chen(node *&T, node *p){
	if (T==NULL) T=p;
	else if (p->data < T->data) chen(T->left, p);
	else chen(T->right, p); 
}

void nhap(node *&T, int a[], int n){
	for(int i=0; i<n; i++){
		node *p= new node;
		p->data= a[i];
		chen(T,p);
	}
}

node* NodeX(node *T, int x){
	node *Y= T;
	while (Y!= NULL){
		if (Y->data == x) return Y;
		else if (x<Y->data) Y= Y->left;
		else Y=Y->right;
	}
	return NULL;
}















