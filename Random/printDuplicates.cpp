#include<bits/stdc++.h>

using namespace std;


int main(){
    
     string str;
    
    cin>>str;
    
    set < char> s;
    int n=str.length();
    
    for(int i=0;i< n;++i){
    	if(s.find(str[i])!=s.end()){
    		cout<<str[i];
    		break;
		}
		else{
			s.insert(str[i]);
		}
	}
	return 0;
}
