#include <iostream>
#include <cstdio>
using namespace std;


int main(){
	int n,q;
	cin >> n>>q;
	int **arr = new int*[n]();
	
	for (int i=0; i<n;++i){
		int k;
		cin >> k;
		
		int* i_arr = new int[k]();
		
		for(int j =0; j<k;++j){
			cin >> i_arr[j];
		}
		arr[i] = &i_arr[0];
	}
	while(q--){
		int i,j;
		cin >> i >> j;
		cout << arr[i][j] << endl;
	}
	return 0;
}


