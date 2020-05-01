/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include<bits/stdc++.h>
#define ll long long
#define ci(x) scanf("%d",&x)
#define print(x) printf("%d",x)
using namespace std;

void printNumber(int n){
	
	if(n==0){
		return ;
	}
	
	printNumber(n-1);
	
	cout<<n<<" ";
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	printNumber(6);	
	return 0;
}

