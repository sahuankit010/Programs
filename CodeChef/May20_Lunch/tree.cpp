#include <bits/stdc++.h>
using namespace std;
typedef int ll;
typedef long double ld;
const ll N = 200005;
char en = '\n';
ll inf = 1e16;
ll mod = 1e9 + 7;
ll power(ll x, ll n, ll mod) {
  ll res = 1;
  x %= mod;
  while (n) {
	if (n & 1)
	  res = (res * x) % mod;
	x = (x * x) % mod;
	n >>= 1;
  }
  return res;
}
ll n, q;
vector<ll> adj[N];
ll arr[N];
ll depth[N];
ll parent[N];
 
void dfs(ll curr, ll prev1 = -1, ll depth1 = 0) {
  parent[curr] = prev1;
  depth[curr] = depth1;
 
  for (ll &x : adj[curr]) {
	if (x != prev1) {
	  dfs(x, curr, depth1 + 1);
	}
  }
}
/*
ll oprn = 0;
long long sumDist = 0;
 */
ll solve(ll a, ll b) {
  ll freq[105];
  memset(freq, 0, sizeof(freq));
  while (a != b) {
	// oprn++;
	if (depth[a] > depth[b]) {
	  freq[arr[a]]++;
	  if (freq[arr[a]] > 1)
	    return 0;
	  a = parent[a];
	} else {
	  freq[arr[b]]++;
	  if (freq[arr[b]] > 1)
	    return 0;
	  b = parent[b];
	}
  }
  freq[arr[a]]++;
  if (freq[arr[a]] > 1)
	return 0;
 
  ll prev1 = -200;
  ll res = 105;
  for (ll i = 1; i <= 100; i++) {
	if (freq[i]) {
	  res = min(res, i - prev1);
	  prev1 = i;
	}
  }
  return res;
}
 
/*
// dont declare n in main,clear adj,as init doesnt do it,call init()
ll dp[N][20];
void dfs2(ll curr, ll prev1 = -1, ll depth1 = 0) {
  dp[curr][0] = prev1;
 
  for (ll x : adj[curr]) {
	if (x != prev1) {
	  dfs2(x, curr, depth1 + 1);
	}
  }
}
ll findLca(ll a, ll b) {
  if (a == b)
	return a;
  if (depth[a] < depth[b])
	swap(a, b);
  ll rem = depth[a] - depth[b];
  for (ll i = 19; i >= 0; i--) {
	if (rem & (1 << i))
	  a = dp[a][i];
  }
 
  if (a == b)
	return a;
 
  for (ll i = 19; i >= 0; i--) {
	if (dp[a][i] != dp[b][i])
	  a = dp[a][i], b = dp[b][i];
  }
  return dp[a][0];
}
 
ll distance(ll a, ll b) {
  ll lc = findLca(a, b);
  ll res = depth[a] + depth[b] - 2 * depth[lc];
  res++;
  return res;
}
 
void init(ll n) {
  memset(dp, -1, sizeof(dp));
  dfs2(1);
  for (ll i = 1; i < 20; i++) {
	for (ll j = 1; j <= n; j++) {
	  if (dp[j][i - 1] != -1)
	    dp[j][i] = dp[dp[j][i - 1]][i - 1];
	}
  }
}
*/
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  ll t;
  cin >> t;
  while (t--) {
 
	cin >> n >> q;
	for (ll i = 1; i <= n; i++) {
	  cin >> arr[i];
	  adj[i].clear();
	}
 
	for (ll i = 1; i < n; i++) {
	  ll x, y;
	  cin >> x >> y;
	  adj[x].push_back(y);
	  adj[y].push_back(x);
	}
	dfs(1);
	/*
	    oprn = 0;
	    sumDist = 0;
	*/
	while (q--) {
	  ll a, b;
	  cin >> a >> b;
	  /*
	  sumDist += distance(a, b);
	  solve(a, b);
	  */
	  cout << solve(a, b) << en;
	}
  }
 
  return 0;
}
