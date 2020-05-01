#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fact(int n){
	cout<<n<<endl;
	if(n==1) return 1; 
//	cout<<n<<endl;
	return n*fact(n-1);
	
}

int main(){
	int n=5;
	
	cout<<fact(n);
	
	return 0;
}
