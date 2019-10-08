#include <bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

struct voter{
 		int key;
 		int val;
	 };

 int main(){
 	int a,b,c,r;
 	cin >> a >> b >> c;
 	int total = a+b+c;	
 	int A[a], B[b], C[c];
 	voter s1[total];
 	int i;
	for(i =0; i<a; ++i) {
		cin >> s1[i].key;
		s1[i].val = 1;
	}
 	for(int k=0; k<b; ++k) {
 		cin >> r;
 		bool newel = true;
 		for( int j = 0; j<i; ++j){
 			if(r==s1[j].key) {
 				s1[j].val++;
 				newel = false;
 				break;
			 }
		 } 
		 if(newel) {
		 	s1[i].key = r;
		 	s1[i].val = 1;
		 	i++;
		 }
	 }
	
 	for(int k=0; k<c; ++k) {
 		cin >> r;
 		bool newel = true;
 		for( int j = 0; j<i; ++j){
 			if(r==s1[j].key) {
 				s1[j].val++;
 				newel = false;
 				break;
			 }
			 
		 } 
		 if(newel) {
		 	s1[i].key = r;
		 	s1[i].val = 1;
		 	i++;
		 }
	 }
 	int M[i]; int k=0;
 	for(int j=0; j<i; ++j) {
 		if(s1[j].val > 1) M[k++] = s1[j].key ;
	 }
	 std::sort(M, M+k);
	 for(int m= 0; m<k; m++) cout << M[m] << endl;
 	
 }
