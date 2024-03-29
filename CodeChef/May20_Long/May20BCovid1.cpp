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
    
    int t;
    cin>>t;
    
    while(t--){
    	int n;
    	cin>>n;
    	
    	int arr[n];
    	
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
		}
		
		int min_answer=INT_MAX,max_answer=INT_MIN,count=1;
		for(int i=0;i<n-1;i++){
			
			if((arr[i+1]-arr[i])<=2){
				count++;
			}
			else{
				min_answer=min(min_answer,count);
				max_answer=max(count,max_answer);
				count=1;
			}
			
		}
		max_answer=max(max_answer,count);
		min_answer=min(min_answer,count);
		
		cout<<min_answer<<" "<<max_answer<<endl;
	}
	return 0;
}

