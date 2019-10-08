#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int x=0, y=0;
	
	for(int i=1 ; i<= n; i+= 2){
		if((i+1) % 4){
			x += i*10;
		}
		else{
			x-=i*10;
		}
	}
	
	for(int i=2 ; i<= n; i+= 2){
		if(i % 4){
			y += i*10;
		}
		else{
			y-=i*10;
		}
	}
	
	cout << x << ", " << y;
}
