/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define ll long long
using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef double ld;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    cout << fixed;
    ll num;
    cin>>num;
    ll temp=num;
    
    int a=3,b=5;
    int ans=0;
    while(1){
    	
		if(num%5==0){
			ans=num/5;
			
			break;
		}
		else{
		
    	int r5=num%5;
    	int p=b-r5;
    	//cout<<num<<endl;
    	num=num-(p*b);
    	ans+=p;
    	if(num==0) break;
    }
    	if(num%3==0){
    		ans+=num/3;
    		
    		break;
		}
		else{
		
    	int r3=num%3;
    	int q=a-r3;
    	num=num-(q*a);
    	ans+=q;
    	
    	if(num==0) break;
    }
    	
	}
	
	cout<<ans;



}

