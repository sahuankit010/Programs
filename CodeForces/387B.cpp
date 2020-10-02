/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include <bits/stdc++.h>
#define YYY  ios::sync_with_stdio(false);cin.tie(NULL);cout.precision(10);cout << fixed;
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
	YYY;
	int n,m;
	cin>>n>>m;
	unordered_set<int>s1;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=0;
	while(m--){
		int a;
		cin>>a;
		
		s1.insert(a);
	}
	
	for(int i=0;i<n;i++){
		if(s1.find(arr[i])==s1.end()) ans++;
	}
	cout<<ans;
	
	return 0;
}




