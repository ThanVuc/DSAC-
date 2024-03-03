#include<iostream>
#include<conio.h>
using namespace std;
int dem=0;
struct node{
	int data;
	node *left= NULL, *right= NULL;
};

void chen(node *&T, node *p);
void nhap(node *&T, int a[], int n);
int demNode1Con(node *T);

int main(){
	node *T= NULL;
	int a[]={5,1,2,6,4,9,8,7,10,3}, n=10;
	nhap(T,a,n);
	cout<<demNode1Con(T);
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

int demNode1Con(node *T){
	if (T==NULL) return 0;
	int count=0;
	if ((T->left==NULL && T->right!=NULL) || (T->right==NULL && T->left!=NULL)) count=1;
	return count + demNode1Con(T->left) + demNode1Con(T->right);
}










