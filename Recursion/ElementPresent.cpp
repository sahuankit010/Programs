/*******************
  Ankit Sahu
  SRMIST Chennai
  GE Bangalore
  UTD Texas
 ***********************/

#include<bits/stdc++.h>
#define ll long long
#define ci(x) scanf("%d",&x)
#define print(x) printf("%d",x)
using namespace std;

bool recursiveSearch(int arr[], int l, int r, int x){
	if(r<l) return false;
	if(arr[l]==x) return true;
	if(arr[r]==x) return true;
	return recursiveSearch(arr, l+1,r-1,x);
	
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,2,3,4,5};
    int x = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    if(recursiveSearch(arr,0,n-1,x))
		cout<<"True";
	else cout<<"False";	
	return 0;
}

