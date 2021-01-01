#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define endl "\n"
#define mod 1000000007
#define re(x, n) for(ll x = 0; x < n; ++x)
#define re1(x, n) for(ll x = n - 1; x >= 0; --x)
#define pb push_back
#define mk make_pair
#define F first
#define S second

class Solution {
	public:
	ll func(ll arr[], ll n, ll k, ll total) {
		ll sum = 0;
		for(ll i = 0; i < k; ++i) {
			sum += arr[i];
		}
		ll sumArr[n - k + 1];
		sumArr[0] = sum;
		for(ll i = k; i < n; ++i) {
			sum += (arr[i] - arr[i - k]);
			sumArr[i - k + 1] = sum;
		}
		ll h = sizeof(sumArr) / sizeof(sumArr[0]);
		for(ll i = 0; i < h; ++i) {
			if(sumArr[i] == total) {
				return 1;
			}
		}
		return 0;
	}
};

signed main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n, k, total;
		cin >> n >> k >> total;
		ll arr[n];
		for (ll i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		Solution ob;
		cout << ob.func(arr, n, k, total) << endl;
		// ob.func(arr, n, k, total);
	}
	cout << endl;
}

static const auto speedup = [](){
  ios_base :: sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
  return 0;
}();
