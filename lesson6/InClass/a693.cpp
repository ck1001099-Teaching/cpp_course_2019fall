#include <iostream>
using namespace std;

int main(){
	// Input
	int n, m;
	while (cin >> n >> m){
		int foods[n];
		int total[n];
		for (int i = 0 ; i < n ; i++){
			cin >> foods[i];
			// Logic
			if (i == 0){
				total[i] = foods[i];	
			} else {
				total[i] = total[i-1] + foods[i];
			}
		}
		for (int i = 0 ; i < m ; i++){
			int p, q;
			cin >> p >> q;
			// Output
			if (p == 1){
				cout << total[q-1] << endl;
			} else {
				cout << (total[q-1] - total[p-2]) << endl;	
			}
		}
	}
	return 0;
}



