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
    int n;
    cin>>n;
    
    int huc=0,twc=0,tec=0,fic=0,onc=0;
    
    int sum=0;
    
    if(n>=100){
    	huc=n/100;
    	n%=100;
	}
	if(n>=20){
    	twc=n/20;
    	n%=20;
	}
	if(n>=10){
    	tec=n/10;
    	n%=10;
	}
	if(n>=5){
    	fic=n/5;
    	n%=5;
	}
	
	onc=n/1;
	
	cout<<huc+twc+tec+fic+onc;



}

