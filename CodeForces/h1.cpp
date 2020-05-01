#include<bits/stdc++.h>
#define ll long long


using namespace std;

int main()
{

	ll n,W;
	cin>>n>>W;
cout<<W<<endl;
	ll ans=0;
	while(n--){
		ll p,w;
		cin>>p>>w;
		cout<<p<<" "<<w<<endl;
		cout<<"yyyyy\n";
		if(w<=W){
			cout<<"Hello\n";
			ll q=p*w;
			ans+=q;
			W-=w;
		}
	}
	cout<<n<<endl<<W<<endl;
	cout<<ans;
	return 0;
}
