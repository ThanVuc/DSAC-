#include<iostream>
#include<conio.h>
using namespace std;

void inMang(int a[], int n);
void chenX(int a[], int &n);

int main(){
	int a[]={1,2,3,4,5,6,7}, n=7;
	chenX(a,n);
	inMang(a,n);
	getch();
	return 0;
}

void chenX(int a[], int &n){
	int vitri, so;
	cout<<"Nhap Vi Tri Can Chen: "; cin>>vitri;
	cout<<"Nhap So Can Chen: "; cin>>so;
	if (vitri<0 || vitri>n) return;
	for(int i=n; i>vitri; i--){
		a[i]=a[i-1];
	}
	a[vitri]= so;
	n++;
}

void inMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}