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

bool isPalindrome(string str, int l, int r){
	if(r<l) return false;
	if(l==r) return true;
	if(str[l]!=str[r]) return false;
	if(l<r){
		return isPalindrome(str, l+1,r-1);
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string str1 = "malayalam";
	string str2 = "maximum";
	cout<<isPalindrome(str1, 0, str1.length()-1);
	cout<<endl;
	cout<<isPalindrome(str2,0,str2.length()-1);
	return 0;
}


