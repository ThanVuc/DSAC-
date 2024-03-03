//bai 1
#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int S(int n);

int main(){
	int n; cin>>n;
	cout<<S(n);
	getch();
	return 0;
}

int S(int n){
	if (n<1) return 0;
	return n+S(n-1);
}