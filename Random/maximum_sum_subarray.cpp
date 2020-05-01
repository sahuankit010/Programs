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


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll arr[]={-2, -3, 4, -1, -2, 1, 5, -3}; 
	ll n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<kadane(arr,n);
	return 0;
}

