
// https://www.hackerrank.com/challenges/pairs/problem?isFullScreen=true

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

int pairs(int k, vector<int> arr) {
    int count = 0;
    	
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size() ;j++){
        	cout<<"i="<<i<<" arr[i]= "<<arr[i]<<" j= "<<j<<" arr[j]= "<<arr[j]<<endl;
        	if(i!=j)
            if((arr[i]-arr[j])==k) count++;
        }
    }
    return count;
}

int main(){
	
	vector<int> arr {1,5,3,4,2};
	
	int k = 2;
	
	cout<<pairs(k,arr)<<endl;
	return 0;
}
