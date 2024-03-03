//bai 2
#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int giaithua(int n);

int main(){
	int n; cin>>n;
	cout<<giaithua(n);
	getch();
	return 0;
}

int giaithua(int n){
	if (n<0){
		cout<<"Khong co giai thua am!";
		return -1;
	}
	if (n==0)||(n==1) return 1;
	return n*giaithua(n-1);
}