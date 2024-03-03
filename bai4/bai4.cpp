#include<iostream>
#include<conio.h>
using namespace std;

void inMang(int a[], int n);
void xoaX(int a[], int &n, int vitri);
void timX(int a[], int &n);

int main(){
	int a[]={1,2,3,3,3,4,3,5,6,7}, n=10;
	timX(a,n);
	inMang(a,n);
	getch();
	return 0;
}

void timX(int a[], int &n){
	int x; cout<<"Nhap x: "; cin>>x;
	for(int i=0; i<n; i++){
		if (a[i]==x){
			xoaX(a,n,i);
			i--;
		};
	}
}

void xoaX(int a[], int &n, int vitri){
	n--;
	for(int i=vitri; i<n; i++){
		a[i]= a[i+1];
	}
}

void inMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}