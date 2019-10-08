#include <bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int n;
	cin >> n;
	int a[2*n][2];
	bool b[2*n];
	for(int i=0; i<2*n;++i){
		cin >> a[i][0] >> a[i][1];
		b[i] = false;
	}
	double distance =0;
	for(int i=0; i<2*n;++i){
		if(b[i] ==false){
			b[i]= true;
			int k = i+1;
			double minDistance = std::sqrt(std::pow((a[i][0]-a[i][1]), 2) + std::pow((a[k][0]-a[k][1]), 2));
			for(int j=i+2; j<2*n;++j ){
				double trial = std::sqrt(std::pow((a[i][0]-a[i][1]), 2) + std::pow((a[j][0]-a[j][1]), 2));
				if(minDistance > trial){
					minDistance = trial;
					k = j;
				}
			}
			b[k] = true;
			distance += minDistance;
		}
	}
	
	cout << distance;
	return 0;
}
