/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include<bits/stdc++.h>
#define ll long long
#define ci(x) scanf("%d",&x)
#define print(x) printf("%d",x)
using namespace std;

ll power(int x,int n){
	
	if(n==0){
		return 1; 
	}
	
	int smallOutput=power(x,n-1);
	
	int out=x*smallOutput;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout<<power(5,3);
	return 0;
}

