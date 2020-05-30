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
    cin>>n;
    int a;
    int ans[100001]={0};
    for(int i=0;i<n;i++) {
    	cin>>a;
    	ans[a]++;
	}
    
    int m;
    cin>>m;
    int ans1=0,ans2=0;
    while(m--){
    	int s;
    	cin>>s;
    	if(ans[s]!=0){
    		ans1+=ans[s];
    		ans2+=n-ans[s];
		}
		else{
			ans1+=n;
			ans2+=n;
		}
		
	}

	cout<<ans1<<" "<<ans2;
	return 0;
}




