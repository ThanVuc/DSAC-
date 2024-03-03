#include<iostream>
#include<conio.h>
#include<stack>
using namespace std;

void TT2HT(string tt, string &ht){
	stack<char> st;
	for(int i=0; i< tt.size(); i++){
		if ((tt[i]>='A' && tt[i]<='Z') || (tt[i]>='0' && tt[i]<='9')){
			ht+=tt[i];
		} else if (tt[i]=='('){
			st.push(tt[i]);
		} 
		else {
			if (tt[i]==')'){
					while (st.top()!='('){
						ht+= st.top();
						st.pop();
						if (st.empty()) break;
					}
			} else 
				if (tt[i]=='+' || tt[i]=='-'){
					if (!st.empty()){
						while (st.top()!='('){
							if (st.empty()){
								st.push(tt[i]);
								break;
						}
						ht+=st.top();
						st.pop();
					}
					st.push(tt[i]);
				} else	st.push(tt[i]);
				
			} else if (tt[i]=='*' || tt[i]=='/'){
				if (!st.empty()){
					while (st.top()== '*' || st.top()=='/'){
						ht+=st.top();
						st.pop();
						if (st.empty()) break;
					}
					st.push(tt[i]);
				} else	st.push(tt[i]);
			}
		}
	}
	while (!st.empty()){
		if (st.top()!= '('){
			ht+=st.top();
		}
			st.pop();
	}
}

int tinh(int a, int b, char dau){
	switch (dau){
		case '+':
			return b+a;
		case '-':
			return b-a;
		case '*':
			return b*a;
		case '/':
			if (b==0) return -1;
			return b/a;
	}
	cout<<"Loi"; return -1;
}

int toInt(char c){
	switch (c){
		case 'A':
			return 2;
		case 'B':
			return 3;
		case 'C':
			return 4;
		case 'D':
			return 5;
		case 'E':
			return 1;
		case 'F':
			return 6;
		case 'G':
			return 7;
	}
	cout<<"Loi!"; return -1;
}

int TinhBieuThuc(string ht){
	stack<int> st;
	for(int i=0; i<ht.size(); i++){
		if (ht[i]>='A' && ht[i]<='Z'){
			st.push(toInt(ht[i]));
		} else {
			int top_forward= st.top();
			st.pop();
			int top_behind= st.top();
			st.pop();
			int k= tinh(top_forward, top_behind, ht[i]);
			st.push(tinh(top_forward, top_behind, ht[i]));
		}
	}
	return st.top();
}

int main(){
	string tt="A*((B+3)+5)*(4-7)+B-9";
	string ht="";
	TT2HT(tt,ht);
	cout<<ht;
	getch();
	return 0;
}