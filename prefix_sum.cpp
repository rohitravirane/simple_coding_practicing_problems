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
	void func(ll arr[], ll n, ll l, ll r) {
		ll prifix_sum[n];
		prifix_sum[0] = arr[0];
		for(ll i = 1; i < n; ++i) {
			prifix_sum[i] = prifix_sum[i - 1] + arr[i];
		}
		if(l != 0) {
			cout << prifix_sum[r] - prifix_sum[l - 1];
		}
		else {
			cout << prifix_sum[r];
		}
	}
};

signed main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n, l, r;
		cin >> n >> l >> r;
		ll arr[n];
		for (ll i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		Solution ob;
		ob.func(arr, n, l, r);
	}
	cout << endl;
}

static const auto speedup = []() {
  ios_base :: sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
  return 0;
}();
