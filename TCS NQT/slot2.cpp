#include <bits/stdc++.h>
using namespace std;

int main(){
	char s[100];
	cin >> s;
	int even=0, odd=0;
	
	for(int i=0; i< strlen(s); ++i){
		int a = s[i] - '0';
		
		if(i%2==0){
			even+= a;
		}
		else{
			odd+=a;
		}
	}
	
	cout << abs(even-odd);
}
