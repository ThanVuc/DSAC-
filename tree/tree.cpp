#include<iostream>
#include<conio.h>
#include<stack>
using namespace std;
//push vao tree
//duyet tree: TienTu, TrungTu, HauTu
//dem node, dem la
struct Node{
	int data;
	Node *Left= NULL, *Right= NULL;
};

void insert(Node *&T, Node *p);
void preOrder(Node *T);
void preOrder1(Node *T);
void postOrder(Node *T);
void input(Node *&T, int a[], int n);
void inOrder(Node *T);
void postOrder1(Node *T);
int countNode(Node *T);
int countNode1(Node *T);
int countLeaf(Node *T);
int countLeaf1(Node *T);

int main(){
	Node *T= NULL;
	int a[100]= {44,18,13,37,15,23,40,88,59,108,55,71}; int n=12;
//	int a[]={5,1,2,6,4,9,8,7,10,3}, n=10;
	input(T,a,n);
	getch();
	return 0;
}

void insert(Node *&T, Node *p){
	if (T==NULL) T=p;
	else if (p->data <= T->data) insert(T->Left, p);
	else insert(T->Right,p);
}

void preOrder(Node *T){
	if (T!= NULL){
		cout<<T->data<<" ";
		preOrder(T->Left);
		preOrder(T->Right);
	}
}


void postOrder(Node *T){
	if (T!= NULL){		
		postOrder(T->Left);
		postOrder(T->Right);
		cout<<T->data<<" ";
	}
}

void postOrder1(Node *T){
	stack<Node*> st;
	stack<Node*> st1;
	st1.push(new Node);
	st.push(T);
//	Node *q;
	Node *p;
	while(!st.empty()){
		p= st.top();
		if (p!= NULL){
			if (p->Right!=NULL || p->Left !=NULL) {
				if (st1.top() != p) st1.push(p);
				else {
					st1.pop(); st.pop();
					cout<<p->data<<" ";
					p= new Node;
				}
			} else {
				cout<<p->data<<" ";
				st.pop();
			}
			st.push(p->Right);
			st.push(p->Left);
		} else {
			st.pop();
		}
	}
}
	                   
			
			
void input(Node *&T, int a[], int n){
	for(int i=0; i<n; i++){
		Node *p= new Node; p->data= a[i]; p->Left== NULL; p->Right==NULL;
		insert(T,p);
	}
}

int countNode(Node *T){
	if (T==NULL) return 0;
	else return 1+countNode(T->Left)+countNode(T->Right);
}

int countNode1(Node *T){
	stack<Node*> st; int count=0; Node* p;
	st.push(T);
	while(!st.empty()){
		p= st.top(); st.pop();
		if (p!=NULL){
			count++;
			st.push(p->Right); st.push(p->Left);
		}
	}
	return count;
}

int countLeaf(Node *T){
	if (T==NULL) return 0;
	if (T->Left==NULL && T->Right==NULL) return 1;
	else return countLeaf(T->Left)+countLeaf(T->Right);
}

int countLeaf1(Node *T){
	stack<Node*> st; int count=0; Node* p; 
	st.push(T);
	while(!st.empty()){
		p= st.top(); st.pop();
		if (p!= NULL)
		if (p->Left==NULL && p->Right==NULL){
			count++;
		} else {
			st.push(p->Right); 
			st.push(p->Left); 
		}
	}
	return count;
}





