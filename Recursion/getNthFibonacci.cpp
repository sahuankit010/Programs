/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include<bits/stdc++.h>
#define ll long long
#define ci(x) scanf("%d",&x)
#define print(x) printf("%d",x)
using namespace std;

ll fib(int n){
	if(n==0) return 0;
	
	if(n==1) return 1;
	
	ll smallOutput1=fib(n-1);
	ll smallOutput2=fib(n-2);
	
	return smallOutput1+smallOutput2;
}

// 0 1 1 2 3 5 8 13 21 34 .....
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout<<fib(50);
	return 0;
}

