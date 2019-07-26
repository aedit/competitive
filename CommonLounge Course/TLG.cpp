#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,sumsi=0, sumti=0;
	cin >> n;
	int *si= new int[n];
	int *ti= new int[n];
	int *lead= new int[n];
	for(int i=0; i<n; i++){
		cin>> si[i]>> ti[i];
		sumsi+= si[i]; sumti+= ti[i];
		lead[i]= sumsi - sumti;
	}
	sort(lead, lead+n);
	
	if(abs(lead[0])>lead[n-1]){
		cout << 2<<" "<< abs(lead[0])<< endl;
	}
	else{
		cout << 1<< " "<< lead[n-1]<<endl;
	}
	
	return 0;
}
