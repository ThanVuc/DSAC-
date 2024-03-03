#include<iostream>
#include<conio.h>
#include<stack>
using namespace std;

struct node{
	int data;
	node *left= NULL, *right= NULL;
};

void chen(node *&T, node *p);
void nhap(node *&T, int a[], int n);
int ChieuCaoCay(node *T, stack<int> st, int &maxLength, int count);

int main(){
	node *T= NULL;
	int a[]={5,1,2,6,4,9,8,7,10,3,11,12,13}, n=13;
	nhap(T,a,n); int maxLength=0, count=0; stack<int> st;
	cout<<ChieuCaoCay(T, st, maxLength, count);
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

int ChieuCaoCay(node *T, stack<int> st, int &maxLength, int count){
	if (T==NULL) return 0;
	
	if (T->left!=NULL && T->right !=NULL) st.push(count);
	
	if (T->left==NULL && T->right==NULL){
		int tmp= 0;
		if (count>maxLength){
			tmp= count - maxLength;
			maxLength= count;
		}
		if (!st.empty()) count= st.top();
		else count= 0;
		return tmp;
	}
	count++;
	return ChieuCaoCay(T->left, st, maxLength, count) + ChieuCaoCay(T->right, st, maxLength, count);
}









