#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
void input(vector<int> &v, int &n);
int sum(vector<int> v, int n);
int linear_search(vector<int> v, int n, int k);
void insert(vector<int> &v, int &n, int value, int pos);
void output(vector<int> v, int n);
int binary_serch(vector<int> v, int n, int target);
void remove(vector<int> &v, int &n, int pos);

int main(){
	int n, k, pos, value, target;
	vector<int> v;
	input(v,n);
	remove(v, n, pos);
	output(v,n);
	getch();
	return 0;
}

void input(vector<int> &v, int &n){
	cout<<"Nhap so luong phan thu cua mang: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		int x; cin>>x;
		v.push_back(x);
	}
}

void output(vector<int> v, int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= "<<v[i]<<"\n";
	}
}

int sum(vector<int> v, int n){
	int sum=0;
	for(int i=0; i<n; i++)
		sum+=v[i];
	return sum;
}

int linear_search(vector<int> v, int n, int k){
	cout<<"Nhap So Can Tim: "; cin>>k;
	for(int i=0; i<n; i++){
		if (v[i]==k) return i;
	}
	return 0;
}

void insert(vector<int> &v, int &n, int value, int pos){
	cout<<"Nhap so can chen: "; cin>>value;
	cout<<"Nhap vi tri can chen: "; cin>>pos;
	v.push_back(v[n-1]);
	for(int i=n; i >= pos; i--){
		if (i==pos){
			v[i]=value;
			break;
		}
		v[i]=v[i-1];
	}
	n++;
}

void remove(vector<int> &v, int &n, int pos){
	cout<<"Nhap Vi Tri Can Xoa: "; cin>>pos;
	if (pos>n){
		cout<<"Vi tri vuot qua mang, ban co muon";
		
		getch();
		exit(0);
	}
	n--;
	for(int i=n-1; i>=pos; i--){
		v[i]=v[i+1];
	}
}

int binary_serch(vector<int> v, int n, int target){
	cout<<"Nhap tri can tim: "; cin>>target;
	int d=0, c=n-1, g;
	while (d<=c){
		g= (d+c)/2;
		if (v[d]==target) return d;
		if (v[c]==target) return c;
		if (v[g]==target) return g;
		if (v[g]>target){
			c=g-1;
			d++;
		}
		if (v[g]<target){
			d=g+1;
			c--;
		}
	}
	return -1;
}






