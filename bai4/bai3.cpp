#include<iostream>
#include<conio.h>
using namespace std;

void inMang(int a[], int n);
void xoaX(int a[], int &n);
int timX(int a[], int n, int x);

int main(){
	int a[]={1,2,3,4,5,6,7}, n=7;
	xoaX(a,n);
	inMang(a,n);
	getch();
	return 0;
}

void xoaX(int a[], int &n){
	int x; cout<<"Nhap x: ";cin>>x;
	int vitri= timX(a,n,x);
	if (vitri==-1){
		cout<<"Not found!";
		return 1;
	};
	n--;
	for(int i=vitri; i<n; i++){
		a[i]= a[i+1];
	}
}

int timX(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if (a[i]==x) return i;
	}
	return -1;
}

void inMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}