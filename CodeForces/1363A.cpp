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
vector<int>arr;
int j = -1; 
void rearrangeEvenAndOdd() 
{  
    
    for (int i = 0; i < arr.size(); i++) {  
        if (arr[i] % 2 == 0) { 
            j++; 
			swap(arr[i], arr[j]); 
        } 
    }
	reverse(arr.begin(),arr.end()); 
} 

int main() {
	YYY;
	
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int temp[2];
		memset(temp,0,sizeof(temp));
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
		
			arr.pb(a);
			if(a%2==0){
				temp[0]++;
			}
			else{
				temp[1]++;
			}
		}
	
	 
		if(n==x){
			ll sum = accumulate(arr.begin(), arr.end(), 0);
		
			if(sum%2==1) cout<<"Yes\n";
			else cout<<"No\n";
		}
	
		else{
			ll prefix[n];
			prefix[0]=arr[0];
			
			for(int i=1;i<n;i++){
				prefix[i] = prefix[i-1] + arr[i];
			}
			ll s=0;
			int y=0;
			rearrangeEvenAndOdd();
			
			if(x%2==1){
			
				for(;y<x-1;y++){
				s+=arr[y];
				}
			
				if(y<j){
				cout<<"Yes\n";
				}
				cout<<"No\n";
			}
			else{
				if(x<n){
					cout<<"Yes\n";
				}
				else{
					cout<<"No\n";
				}
			}
		}
	}
	
	
	return 0;
}




