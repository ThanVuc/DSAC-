#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *left= NULL, *right= NULL;
};

void chen(node *&T, node *p);
void nhap(node *&T, int a[], int n);
void xuly(node *T, int tmp, int &dem);
int ChieuCaoCay(node *T);

int main(){
	node *T= NULL;
	int a[]={5,1,2,6,4,9,8,7,10,3}, n=10;
	nhap(T,a,n);
	cout<<ChieuCaoCay(T);
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

void xuly(node *T, int tmp, int &dem){
	if (T!=NULL){
		xuly(T->left,tmp,dem);
		xuly(T->right,tmp,dem);
	} else {
		if (tmp>dem)
			dem= tmp;
		tmp=0;
	}
}

int ChieuCaoCay(node *T){
	int dem=0, tmp=0;
	xuly(T,tmp,dem);
	return dem;
}





