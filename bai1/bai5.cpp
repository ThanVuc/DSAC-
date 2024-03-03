//bai5
#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
string S(int n);

int main(){
	int n; cin>>n;
	cout<<S(n);
	getch();
	return 0;
}

string S(int n){
	if (n<1) return "";
	return S(n/2)+to_string(n%2);
}