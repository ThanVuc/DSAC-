#include<iostream>
#include<conio.h>
#include<cstring>
#include<math.h>
using namespace std;
bool check_prime(int n);
void T(int n);

int main(){
	int n; cin>>n;
	T(n);
	getch();
	return 0;
}

bool check_prime(int n){
	if ((n==1) || (n==2))
		return true;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return false;
	}
	return true;
}

void T(int n){
	if (n<=2){
		cout<<"1, 2";
		return;
	}
	if (n%2==0) T(n-1);
	else T(n-2);
	
	if (check_prime(n)) cout<<", "<<n;
}