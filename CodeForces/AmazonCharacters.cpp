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
    string s1,s2;
    cin>>s1>>s2;
    
    unordered_map<char,int> map;
    
    for(int i=0;i<s1.length();i++){
    	map[s1[i]]++;
	}
	for(int i=0;i<s2.length();i++){
		map[s2[i]]++;
	}
	
	unordered_set<char>ans;
	
	for(auto it=map.begin();it!=map.end();it++){
		if(it->second==1){
			ans.insert(it->first);
		}
	}
	
	for(auto x:ans){
		cout<<x;
	}


}

