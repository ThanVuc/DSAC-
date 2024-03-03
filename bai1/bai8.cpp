#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int UCLN(int a, int b);

int main(){
	int a,b; cin>>a>>b;
	if  (a==0 || b==0)
		cout<<"Can't Have GCD with 0";
	else cout<<UCLN(a,b);
	getch();
	return 0;
}

int UCLN(int a, int b){
	if (b==0) return a;
	UCLN(b, a%b);
}