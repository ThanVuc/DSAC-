//bai4
#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
float S(int n);

int main(){
	int n; cin>>n;
	cout<<S(n);
	getch();
	return 0;
}

float S(int n){
	if (n<1) return -1;
	if (n==1) return 1;
	return float(1.0)/(n*n)+S(n-1);
}