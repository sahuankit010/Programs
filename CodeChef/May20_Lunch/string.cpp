#include <bits/stdc++.h>
#define endl '\n'

#define SZ(x) ((int)x.size())
#define ALL(V) V.begin(), V.end()
#define L_B lower_bound
#define U_B upper_bound
#define pb push_back

using namespace std;
template<class T, class T1> int chkmin(T &x, const T1 &y) { return x > y ? x = y, 1 : 0; }
template<class T, class T1> int chkmax(T &x, const T1 &y) { return x < y ? x = y, 1 : 0; }
const int MAXN = (1 << 20);

int n;
string a;
string b;

void read() {
	cin >> n;
	cin >> a;
	cin >> b;
}

void solve() {
	vector<vector<int> > ans;
	for(int i = 0; i < n; i++) {
		if(a[i] < b[i]) {
			cout << -1 << endl;
			return;
		}
	}

	for(char c = 'z'; c >= 'a'; c--) {
		vector<int> pos;
		bool ok = 0;

		for(int i = 0; i < n; i++) {
			if(b[i] == c && a[i] != c) {
				pos.pb(i);
			}
		}

		if(!ok && !pos.empty()) {
			for(int i = 0; i < n; i++) {
				if(a[i] == c) {
					ok = 1;
					pos.pb(i);
				}				
			}
		}

		if(!ok && !pos.empty()) {
			cout << -1 << endl;
			return;
		}

		if(!pos.empty()) ans.pb(pos);
		for(int i: pos) {
			a[i] = c;
		}
	}

	cout << SZ(ans) << endl;
	for(auto li: ans) {
		cout << SZ(li) << " ";
		for(int x: li) cout << x << " ";
		cout << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while(T--) {
		read();
		solve();
	}

	return 0;
}
