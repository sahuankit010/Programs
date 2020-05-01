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


int main() {
    
    int t;
    cin>>t;
    
    while(t--){
    	int n;
    	cin>>n;
    	
    	int arr[n];
    	forn(i,n){
    		cin>>arr[i];
		}
		int max_answer=1,max_value=1;
		
		int min_value=1,x1=1,x2,final_min;
		
		int q=0;
		
		forn(i,n-1){
			
			bool flag=false;
			
			if((arr[i+1]-arr[i])<=2){
				min_value++;
				max_value++;
				flag=true;
			}
			
			if(flag){
				x1=max(min_value,x1);
				max_answer=max(max_answer,max_value);
			}
			else{
				x2=min(x1,min_value);
				min_value=1;
				max_value=1;
				q++;
			}
		}
		
		if(q>0)
		final_min=min(x1,x2);
		else{
			final_min=x1;
		}
		
		cout<<final_min<<" "<<max_answer<<endl;
	}
	return 0;
}

