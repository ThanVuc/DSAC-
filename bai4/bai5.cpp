#include<iostream>
#include<conio.h>
using namespace std;

void inMang(int a[], int n);
void HV(int &a, int &b);
void DN1(int a[], int n);
void DN2(int a[], int n, int dem);

int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10}, n=10;
	DN2(a,n,n-1);
	inMang(a,n);
	getch();
	return 0;
}

void HV(int &a, int &b){
	int t=a;
	a=b;
	b=t;
}

void DN1(int a[], int n){
	for(int i=0;i<=n/2; i++){
		HV(a[i],a[n-i-1]);
	}
}

void DN2(int a[], int n, int dem){
	if (dem==n/2) return;
	DN2(a,n,dem-1);
	HV(a[dem],a[n-dem-1]);
}

void inMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}