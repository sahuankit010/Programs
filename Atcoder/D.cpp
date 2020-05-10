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
    int n;
    ll k;
    cin>>n;
	cin>>k;
    int arr[n];
    for(int i=0;i<n;i++) {
	cin>>arr[i];
	}
	ll p=k;
    int a=1,ans;
    set<int>s;
    while(k--){
    	ans=arr[a-1];
    	a=ans;
    	if(s.find(ans)!=s.end()){
    		s.insert(ans);
		}
		else{
			break;
		}
	}
	
	int l=s.size();
	
	ll q=p%l;
	int val;
	int t=0;
	for(auto it: s){
		val=*it;
		t++;
		if(t==q) break;
	}
	
	cout<<val;
	


	return 0;
}




