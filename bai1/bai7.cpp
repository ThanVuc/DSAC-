#include<iostream>
#include<conio.h>
#include<cstring>
#include<math.h>
using namespace std;
bool check_perfect(int n);
void T(int n);

int main(){
	int n; cin>>n;
	T(n);
	getch();
	return 0;
}

bool check_perfect(int n){
	int tmp=1;
	for(int i=2; i<sqrt(n); i++){
		if (n%i==0) tmp+=i+n/i;
	}
	if (tmp==n)
		return true;
	else return false;
}

void T(int n){
//	if (n==6) cout<<n;
	if (n<6) return;
	T(n-1);
	if (check_perfect(n)) cout<<n<<"\n";
}















