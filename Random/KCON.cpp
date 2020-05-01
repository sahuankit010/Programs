/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include<bits/stdc++.h>
#define ll long long
#define ci(x) scanf("%d",&x)
#define print(x) printf("%d",x)
using namespace std;

ll kadane(int arr[],int n){
	
	ll curr_best=0,best=0;
	
	for(int i=0;i<n;i++){
		
		curr_best+=arr[i];
		
		if(curr_best<0){
			curr_best=0;
		}
		
		best=max(best,curr_best);
	}
	
	return best;
}

ll KCON(int arr[], int n, int k){
	
	ll kadane_sum=kadane(arr,n);
	
	if(k==1){
		return kadane_sum;
	}
	
	ll curr_prefix_sum=0,curr_suffix_sum=0;
	ll max_prefix_sum=INT_MIN;
	ll max_suffix_sum=INT_MIN;
	
	for(int i=0;i<n;i++){
		curr_prefix_sum+=arr[i];
		max_prefix_sum=max(max_prefix_sum,curr_prefix_sum);
	}
	
	for(int i=n-1;i>=0;i--){
		curr_suffix_sum+=arr[i];
		max_suffix_sum=max(curr_suffix_sum,max_suffix_sum);
	}
	
	ll total_sum=curr_suffix_sum;
	ll ans;
	if(total_sum>0){
		ans=max(max_prefix_sum+max_suffix_sum+(total_sum*(k-2)),kadane_sum);
	}
	else{
		ans=max(kadane_sum,max_prefix_sum+max_suffix_sum);
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	 int t;
	cin>>t;
	while(t--){
		 int n,k;
		cin>>n>>k;
		int  arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<KCON(arr,n,k)<<endl;
	}
	return 0;
}

