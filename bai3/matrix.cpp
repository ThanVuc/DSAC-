#include<iostream>
#include<conio.h>
using namespace std;
void print_Matrix(int a[][100], int r, int c);
void ProductSum(int a[][100], int b[][100], int c[][100], int n);

int main(){
	int a[100][100]={{1,2}, {3,4}}, b[100][100]={{5,6}, {7,8}}, c[100][100];
	int n=2;
	ProductSum(a,b,c,n);
	print_Matrix(c,n,n);
	getch();
	return 0;
}
void ProductSum(int a[][100], int b[][100], int c[][100], int n){
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				c[i][j]+= a[i][k]*b[k][j];
			}
		}
	
}

void print_Matrix(int a[][100], int r, int c){
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";	
	}
}
