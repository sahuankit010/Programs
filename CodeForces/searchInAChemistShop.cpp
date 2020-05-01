#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll leftFind(ll arr[],ll n,ll find){
    
    ll l=0,r=n-1;
    
    while(l<=r){
        
        ll mid=l+(r-l)/2;
        
        if(arr[mid]==find){
            return mid;
        }
        
        else if(arr[mid]<find){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}

ll rightFind(ll arr[],ll n, ll find){
    
    ll l=0,r=n-1;
    
    while(l<=r){
        
        ll mid=l+(r-l)/2;
        
        if(arr[mid]==find){
            return mid;
        }
        else if(arr[mid]<find){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    
    return -1;
}

int main()
{
    ll n;
    cin>>n; //number of medicines
    
    ll med[n];
    
    for(int i=0;i<n;i++){
        cin>>med[i];
    }
    
    long long leftRange,rightRange;
    
    cin>>leftRange>>rightRange;
    
    ll left=leftFind(med,n,leftRange)+1;
    ll right=rightFind(med,n,rightRange)+1;
    
    cout<<left<<endl<<right<<endl;
    
    if(right ==-1 and left == -1){
        cout<<"-1";
    }
    
    else if(left == -1 or right == -1){
        cout<<"1";
    }
    
    else{
        cout<<right-left;
    }
    
    

    return 0;
}

