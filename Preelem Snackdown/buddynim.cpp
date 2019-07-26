#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

int main(){
	short t;
	cin >> t;
	if(t<1 || t>100) return 0;
	while(t--){
		short n,m,n0=0,m0=0;
		cin >> n >> m;
		if(n<1 || m < 1 || n >100 || m > 100) return 0;
		short a[n],b[n];
		for(short i=0; i<n; ++i) {
			cin >> a[i];
			if(a[i]==0) n0++;
		}
		for(short i=0; i<m; ++i) {
			cin >> b[i];
			if(b[i]==0) m0++;
		}
		n-= n0; m-=m0;
		
		if(n==m) cout << "Bob" << endl;
		else cout << "Alice" << endl;
	}
	
	return 0;
}
