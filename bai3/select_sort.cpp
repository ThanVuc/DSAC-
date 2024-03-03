#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &a, int &b);A
void sort(int a[], int n);
void print_arr(int a[], int n);

int main(){
	int a[100]={7,4,8,2,9,3,1,5,6};
	int n=9;
	sort(a, n);
	print_arr(a,n);
	getch();
	return 0;
}

void print_arr(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}

void swap(int &a, int &b){
	int tmp= a;
	a=b;
	b=tmp;	
}

void sort(int a[], int n){
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++){
			if (a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
}





