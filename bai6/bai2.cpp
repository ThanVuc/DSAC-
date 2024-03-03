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

int fibo(int n);


int main(){
	Stack st;
	cout<<fibo(7);
	getch();
	return 0;
}

int fibo(int n){
	Stack st;
	int sum= 0;
	st.push(n);
	while (!st.isEmpty()){
		if (st.top()==1 || st.top()==2){
			sum+=1;
			st.pop();
		} else {
			int tmp= st.top();
			st.pop();
			st.push(tmp-1);
			st.push(tmp-2);
		}         
	}
	return sum;
}