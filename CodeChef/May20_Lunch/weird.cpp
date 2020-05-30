/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define mp make_pair
#define mt make_tuple
#define gcd(a,b) (_gcd((a),(b)))
#define lcm(a,b) ((a*b)/gcd(a,b))
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define pr pair<ll,ll>
#define vp vector<pr>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    cout << fixed;
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int a[n],b[n];
    	int prea[n+1],preb[n+1];
    	prea[0]=preb[0]=0;
    	
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		prea[i+1]=prea[i]+a[i];
		}
		for(int i=0;i<n;i++){
    		cin>>b[i];
    		preb[i+1]=preb[i]+b[i];
		}
		ll ans=0;
		
//		for(int i=0;i<n+1;i++) cout<<prea[i]<<" ";
//		cout<<endl;
//		for(int i=0;i<n+1;i++) cout<<preb[i]<<" ";
//		cout<<endl;
		for(int i=0;i<n;i++){
			
			if( (prea[i]==preb[i]) && (prea[i+1]==preb[i+1]) ){
				ans+=(abs(prea[i+1]-prea[i]));
			}
//			cout<<ans<<" ";
		}
		cout<<ans<<"\n";
	}


	return 0;
}




