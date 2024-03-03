#include<iostream>
#include<conio.h>
using namespace std;

void inMang(int a[], int n);
int TuyenTinh(int a[], int n, int x);
int NhiPhan(int a[], int n, int x);

int main(){
	int a[]={1,2,3,4,5,6,7}, n=7;
	inMang(a,n);
	int x; cout<<"\nNhap x:"; cin>>x;
	cout<<TuyenTinh(a,n,x);
	cout<<"\n"<<NhiPhan(a,n,x);
	getch();
	return 0;
}

int TuyenTinh(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if (a[i]==x){
			return i;
		}
	}
	return -1;
}

int NhiPhan(int a[], int n, int x){
	int d=0, c= n-1, g;
	if (x>a[n-1] || x<a[0]){
		return -1;
	}
	while(1){
		g=(d+c)/2;
		if (a[g]>x){
			c=g-1;
		}
		if (a[g]<x){
			d=g+1;
		}
		if (a[g]==x){
			return g;
		}
	}
}

void inMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}