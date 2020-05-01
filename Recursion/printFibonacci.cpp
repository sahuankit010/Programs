/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include<bits/stdc++.h>
#define ll long long
#define ci(x) scanf("%d",&x)
#define print(x) printf("%d",x)
using namespace std;

ll printFibonacci(int n){
	
	if(n==0) {
	
	return 0;
	}
	
	if(n==1){
	
		return 1;
	}
	
	return printFibonacci(n-1)+printFibonacci(n-2);
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   for(int i=0;i<=6;i++){
   	cout<<printFibonacci(i)<<" ";
   }
	return 0;
}

