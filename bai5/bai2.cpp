#include<iostream>
#include<conio.h>
using namespace std;
void sapxepchon(int a[],int n);
void sapxepnoibot(int a[], int n);
void sapxepchen(int a[],int n);
void swap(int &a, int &b);
void inmang(int a[], int n);
void quicksort(int a[], int d, int c);
int nhiphan(int a[], int d, int c);

int main(){
	int a[1000]={5,2,1,4,3,6,8,7,9,0};
	int n=10;
//	sapxepchon(a,n);
//	sapxepnoibot(a,n);
	sapxepchen(a,n);
//	quicksort(a,0,n-1);
	inmang(a,n);
	getch();
	return 0;
}

void inmang(int a[], int n){
	for (int i=0; i<n; i++){
		cout<<a[i]<<"  ";
	}
}

void swap(int &a, int &b){
	int t=a;
	a=b;
	b=t;
}

void sapxepchon(int a[],int n){
	for (int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++){
			if (a[i]>a[j]){
				swap(a[i], a[j]);
			}
		}
}

void sapxepnoibot(int a[], int n){
	 while(n!=1){
	 	n--;
	 	for (int i=0; i<n; i++){
	 		if (a[i]>a[i+1]){
	 			swap(a[i], a[i+1]);
			}
		 }
	 }
}

void sapxepchen(int a[],int n){
	int i=0;
	while (i<n-1){
		int t= i;
		while(a[i]>a[i+1]){
			swap(a[i],a[i+1]);
			i--;
		}
		i=t+1;
	}
}

int nhiphan(int a[], int d, int c){
	int i=d, j=c, p=(d+c)/2;
	while (1){
		while(a[i]<a[p]) i++;
		while(a[j]>a[p]) j--;
		if (i<=j){
			swap(a[i],a[j]);
			i++; j--;
		} else return i;
	}
}

void quicksort(int a[], int d, int c){
	if (d>=c) return;
	int p= nhiphan(a,d,c);
	quicksort(a,d,p-1);
	quicksort(a,p,c);
}









