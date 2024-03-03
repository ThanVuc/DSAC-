#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *left= NULL, *right= NULL;
};

void chen(node *&T, node *p);
void nhap(node *&T, int a[], int n);
int demLa(node *T);

int main(){
	node *T= NULL;
	int a[]={5,1,2,6,3,9,8,7,10,4}, n=10;
	nhap(T,a,n);
	cout<<demLa(T);
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

int demLa(node *T){
	if (T==NULL) return 0;
	if (T->left==NULL && T->right==NULL) return 1;
	else return demLa(T->left) + demLa(T->right);
}

