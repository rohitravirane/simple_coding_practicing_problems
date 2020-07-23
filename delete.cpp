#include <bits/stdc++.h>
#define ll unsigned long long int
#define mod 10e9 + 7
#define endl "\n"
#define pb push_back
#define mk make_pair
#define F first
#define S second
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
	*this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

void deleteOp(ll arr[], ll n, ll num) {
	ll i;
	for(i = 0; i < n; ++i) {
		if(arr[i] == num)
			break;
	}
	if(i < n) {
		n = n - 1;
		for(ll j = i; j < n; ++j) {
			arr[j] = arr[j + 1];
		}
	}
	for(ll k = 0; k < n; ++k) {
		cout << arr[k] << " ";
	}
}

signed main() {
    ll t;
    cin >> t;
    while(t--) {
		ll n, num;
		cin >> n >> num;
		ll arr[n];
		for(ll i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		deleteOp(arr, n, num);
		cout << endl;
	}
	cout << endl;
}

static const auto speedup = [](){
  ios_base :: sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
  return 0;
}();

/*
Input:
2                              
5 2
3 4 6 2 9
3 6
3 7 2

Output:
3 4 6 9 
3 7 2
*/
