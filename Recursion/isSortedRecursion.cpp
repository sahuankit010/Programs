/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include<bits/stdc++.h>
#define ll long long
#define ci(x) scanf("%d",&x)
#define print(x) printf("%d",x)
using namespace std;

bool isSorted(int arr[],int n){
	
	if(n==0 or n==1){
		return true;
	}
	
	if(arr[0]>arr[1]){
		return false;
	}
	bool small=isSorted(arr+1,n-1);
	
	return small;
	
	
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int arr[]={1,5,78,9};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<isSorted(arr,size);
	return 0;
}

