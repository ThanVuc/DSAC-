//bai3
//bai5
#include<iostream>
#include<conio.h>
#include<cstring>
#include<math.h>
using namespace std;
int S(int n);

int main(){
	int n; cin>>n;
	cout<<S(n);
	getch();
	return 0;
}

int S(int n){
	if (n==1) return 1;
	if (n<1) return -1;
	return (-pow(-1,n))*n+S(n-1);
}