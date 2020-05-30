/*******************
  Ankit Sahu
  SRMIST Chennai
 ***********************/

#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define mp make_pair
#define mt make_tuple
#define gcd(a,b) (_gcd((a),(b)))
#define lcm(a,b) ((a*b)/gcd(a,b))
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define pr pair<ll,ll>
#define vp vector<pr>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (int x=0;x<adj[v].size();x++)
           cout << "-> " << adj[v][x];
        printf("\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    cout << fixed;
    
    int t;
    cin>>t;
    while(t--){
    	int n,q;
    	cin>>n>>q;
    	int arr[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
		}
		int f=n;
		vector<int> adj[f];
		while(f--){
			int u,v;
			cin>>u>>v;
			addEdge(adj,u,v);
		}
		printGraph(adj,n); 
	}


	return 0;
}




