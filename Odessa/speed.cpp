#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int main() {

    int t;
    scanf("%d", &t);
    while(t--){
    	int n;
    	scanf("%d", &n);
    	int s[n],r[n]={0};
    	for(int i=0; i<n;++i){
    		cin >> s[i];
		}
		for(int i=0;i<n;++i){
			for(int j=i+1; j<n;j++){
				if(s[i]>s[j]) {
					r[i]=j-i;
					continue;
				}
			}
			cout << r[i] << " ";
		}
		
		cout << endl;
	}
}
