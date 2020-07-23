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

void insertOp(ll arr[], ll n, ll cap, ll pos, ll x) {
	if(n == cap) {
		cout << n;
	}
	ll idx = pos - 1;
	for(ll i = n - 1; i >= idx; --i) {
		arr[i + 1] = arr[i];
	}
	arr[idx] = x;
	for(ll i = 0; i <= cap; ++i) {
		cout << arr[i] << " ";
	}
}

signed main() {
    ll t;
    cin >> t;
    while(t--) {
		ll n, pos, num, cap;
		cin >> n >> pos >> num >> cap;
		ll arr[n];
		for(ll i = 0; i < cap; ++i) {
			cin >> arr[i];
		}
		insertOp(arr, n, cap, pos, num);
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
5 2 3 4
2 4 3 1
6 4 2 3
4 7 8

Output:
2 3 4 3 1 
4 7 8 2
*/
