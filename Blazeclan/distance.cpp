#include <bits/stdc++.h>
using namespace std;

string s = "";

string isPossible(int a, int b, int c, int d){
	if(a==c && b==d) s = "Yes";
	else if(a>c || b>d) s =  "No";
	else if(a+b<=c && a+b>d) s =  isPossible(a+b,b,c,d);
	else s = isPossible(a,a+b,c,d);
	
	return s;
}

int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	cout << isPossible(a,b,c,d);
	
	return 0;
}

