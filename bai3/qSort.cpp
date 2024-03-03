#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &a, int &b);
void Qsort(int a[], int l, int r);
int partition(int a[], int l, int r);
void print_arr(int a[], int n);

int main(){
	int a[100]={7,9,8,2,4,3,1,5,6};
	int n=9;
//	partition(a,0,8);
	Qsort(a,0,8);
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

int partition(int a[], int l, int r){
	int i=l, j=r, p=a[(l+r)/2];
	while(1){
		while(a[i]<p)
			i++;
		while(a[j]>p)
			j--;
		if (i<=j){
			swap(a[i], a[j]);
			i++; j--;
		} else {
			cout<<i<<"\n";
			return i;
		}
	}
	
}
void Qsort(int a[], int l, int r){
	if (l>=r) return;
	int p= partition(a, l, r);       
	Qsort(a,l,p-1);
	Qsort(a,p,r);
}