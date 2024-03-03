#include<iostream>
#include<conio.h>
using namespace std;

void inMang(int a[], int n);
void chenX(int a[], int &n);
int timVT(int a[], int n);

int main(){
	int a[]={1,3,5,7,8}, n=5;
	chenX(a,n);
	inMang(a,n);
	getch();
	return 0;
}

int timVT(int a[], int n, int x){
	int d=0, c=n-1, g;
	if (x<a[1]) return 0;
	if (x>a[n-1]) return n-1;
	while(1){
		g=(d+c)/2;
		if (a[g]<x && a[g+1]>x){
			return g+1;
		}else{
			if (a[g]<x){
				d=g+1;
				c--;
			}
			if (a[g]>x){
				d++;
				c=g-1;
			}
			if (a[g]==x){
				return -1;
			}
		}
	}
}

void chenX(int a[], int &n){
	int x;
	cout<<"Nhap So Can Chen: "; cin>>x;
	int vitri= timVT(a,n,x);
	if (vitri<0 || vitri>n) return;
	for(int i=n; i>vitri; i--){
		a[i]=a[i-1];
	}
	a[vitri]= x;
	n++;
}

void inMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}