#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i = 0; i <= n-1; i++)
			cin >> a[i];
		
		if(!(n % 2)){
			cout << "YES" << endl;
			continue;
		}
		bool is = false;
		for(int i = 0; i <= n - 2; i++){
			if(a[i + 1] <= a[i])
				is = true;
		}
		if(is==true)
			cout << "YES" << endl;
		
		else
			cout << "NO" << endl;
	}
	
	return 0;
}