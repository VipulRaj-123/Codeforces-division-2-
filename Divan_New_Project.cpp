#include <bits/stdc++.h>
#define ll long long 
#define f first
#define s second
using namespace std;

ll addd(int kuda){
	if(kuda>0)
		return -kuda;
    else
	    return 1-kuda;
}

int main() {
	ll t,n;
	cin >> t;
	while(t--){
		ll ans=0,kuda=1;
		cin >> n;
		ll anss[n];
		pair <ll,ll> a[n];
		for(int i = 0; i <= n-1; i++){
			cin >> a[i].f;
			a[i].s = i;
		}
		sort(a,a+n);
		for(int i=n-1;i>=0;i--){
			anss[a[i].s]=kuda;
			ans=ans+(2*abs(kuda)*a[i].f);
			kuda=addd(kuda);
		}
		cout<<ans<<endl;
		cout<<0<<" ";
		for(int i=0;i<=n-1;i++)
			cout<<anss[i]<<" ";
		cout<<endl;
	}	
	return 0;
   }