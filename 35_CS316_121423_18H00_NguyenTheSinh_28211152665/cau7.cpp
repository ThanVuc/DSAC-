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
void TT(node *T);
void TT1(node *T);

int main(){
	node *T= NULL;
	int a[]={5,1,2,6,4,9,8,7,10,3}, n=10;
	nhap(T,a,n);
	TT1(T);
	cout<<"\n";
	TT(T);
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

void TT(node *T){
	if (T!=NULL){
		cout<<T->data<<" ";
		TT(T->left);
		TT(T->right);
	}
}

void TT1(node *T){
	stack<node *> st;
	st.push(T);
	while (!st.empty()){
		node* p= st.top(); st.pop();
		if (p!=NULL){
			cout<<p->data<<" ";
			st.push(p->right);
			st.push(p->left);
		}
	}
}







