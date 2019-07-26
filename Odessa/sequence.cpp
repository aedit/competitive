#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int main() {

    int n, k;
    cin >> n >> k;
    int S[n];
    long long sequence=0;
    for(int i=0; i<n; i++)
    {
    	cin >> S[i];
    	int cont =S[i];
    	for(int j=i; j>=0; j--){
    		if(abs(cont - S[j]) <= k) sequence++;
		}
    }

    long long out_;
    out_ = sequence;
    cout << out_;
}
