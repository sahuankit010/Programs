/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include<bits/stdc++.h>
#define ll long long
#define ci(x) scanf("%d",&x)
#define print(x) printf("%d",x)
using namespace std;

int numberOfDigit(ll number){
	
	if(number==0) return 0;
	
	int smallAns=numberOfDigit(number/10);
	
	int ans=1+smallAns;
	
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout<<numberOfDigit(78945);
	return 0;
}

