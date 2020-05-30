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
    
    int arr[] ={6,4,2,1,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int elementMax = arr[n-1], elementMin = arr[n-1], count = 0;
    int ans[n];
    
    set<int> s;
    s.insert(arr[0]);
    
    set<int>:: iterator it;
	
	for(int i = 1;i<n;i++){
		
		s.insert(arr[i]);
		
		it=s.upper_bound(arr[i]);
	}


	return 0;
}




