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
//    int t;
//    cin>>t;
//    while(t--){
    	long long int x,y,l,r;
     	cin>>x>>y>>l>>r;
    // scanf("%lld%lld%lld%lld", &x,&y,&l,&r);
    	
    	ll large=INT_MIN,value,index;
    	
    	for(ll i=l;i<=r;){
    		
    		value = (x&i)*(y&i);
    		
    		if(large<value){
    			large=value;
    			index=i;
			}
			else if(large==value){
				index=min(index,i);
			}
			if(i<7){
			    i++;
			}
			else{
			    i=(i*2)+1;
			}
			
		}
		cout<<index<<"\n";
//	}


	return 0;
}

