#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int main() {

    int n, q;
    scanf("%d %d", &n, &q);
    int a[n]= {0};
    int count=0;
    for(int m=0;m<q;++m){
    	int t,i,b; scanf("%d %d %d", &t, &i, &b)
    	switch(t){
    		case 1:
    			a[i-1] = a[i-1] ^(1<<b);
    			break;
    		case 2:
    			count=0;
    			for(int k=0; k<i;++k){
    				if(a[k] & 1<<b) count++;
				}
    			cout << count << endl;
    			break;
		}
	}
}
