#include<iostream>
#include<conio.h>
using namespace std;

struct Stack{
	int a[1000];
	int n=0;
	
	bool isEmpty(){
		return n==0;
	}

	int top(){
		return a[n-1];
	}

	void push(int x){
		a[n]=x;
		n++;
	}

	void pop(){
		n--;
	}
};



int main(){
	Stack st;
	cout<<st.isEmpty()<<"\n";
	st.push(10);
	st.push(11);
	cout<<st.top()<<"\n";
	st.pop();
	cout<<st.isEmpty()<<"\n";
	cout<<st.top();
	getch();
	return 0;
}












