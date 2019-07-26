#include <bits/stdc++.h>
using std::cin;
using std::cout;

int main(){
	int n,h;
	cin >> n >> h;
	
	int a[n];
	for(int i=0;i<n;++i) cin >> a[i];
	/*
	1 : Move left

    2 : Move right

    3 : Pick up box

    4 : Drop box

    0 : Quit

	*/
	
	int choice, it=0, crane=0;
	do{
		for(int i=0; i<n;i++ ) cout << a[i] << " ";
		cout << std::endl;
		
		cin >> choice;
		
		switch(choice){
			case 1: {
				if(!it) it--;
				break;
			}
			case 2: {
				if(it!=n-1) it++;	
				break;
			}
			case 3: {
				if(crane==0 && a[it] != 0) {
					crane++;
					a[it]--;
				}
				break;
			}
			case 4: {
				if(crane!=0 && a[it] != h-crane){
					crane--;
					a[it]++;
				}	
				break;
			}
			
		}
			
	}while(choice);
	
	cout << choice << std::endl;
	
	for(int i=0; i<n;i++ ) cout << a[i] << " ";
	
}
