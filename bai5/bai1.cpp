#include<iostream>
#include<conio.h>
using namespace std;
int TimTuyenTinh(int a[],int n, int x);
int TimNhiPhan(int a[], int n, int x);

int main(){
	int a[1000]={1,2,4,5,6,7,8,10,12,14}, x;
	int n=10;
	cout<<"Nhap x: "; cin>>x;
	cout<<TimTuyenTinh(a,n,x)<<"\n";
	cout<<TimNhiPhan(a,n,x);
	getch();
	return 0;
}

int TimTuyenTinh(int a[], int n,int x){
	for (int i=0; i<n; i++){
		if (a[i]==x)
			return i;
	}
	return -1;
}

int TimNhiPhan(int a[], int n, int x){
	int d=0, c=n-1;
	while (d<=c){
		int g=(d+c)/2;
		if (a[g]==x) return g;
		if (a[g]>x){
			c=g-1;
		}
		if (a[g]<x){
			d=g+1;
		}
	}
	return -1;
}










