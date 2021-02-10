#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define mod 1000000007
#define re(x, n) for(ll x = 0; x < n; ++x)
#define re1(x, n) for(ll x = n - 1; x >= 0; --x)
#define pb push_back
#define mk make_pair
#define F first
#define S second
using namespace std;

class Solution {
	public:
	static bool sortBySec(const pair<ll, ll> &a, const pair<ll, ll> &b) {
		if(a.second == b.second)
			return a.first > b.first;
		return a.second > b.second;
	}
	vector<pair<ll, ll>> sortBySecond(vector<pair<ll, ll>> v) {
		sort(v.begin(), v.end(), sortBySec);
		return v;
	}
};

signed main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector<pair<ll, ll>>v;
		for(ll i = 0; i < n; ++i) {
			ll a, b;
			cin >> a >> b;
			v.push_back({a, b});
		}
		Solution obj;
		vector<pair<ll, ll>> res = obj.sortBySecond(v);
		for(ll i = 0; i < n; ++i) {
			cout << "(" << res[i].first << "," << res[i].second << ")" << " ";
		}
		cout << endl;
	}
	cout << endl;
}

static const auto speedup = []() {
  ios_base :: sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
  return 0;
}();
