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

// Logarithmic Solution
ll solve(ll n) {
	return floor(log10(n) + 1);
}

// Recursive Solution
//ll solve(ll n) {
	//if(n == 0) 
		//return 0;
	//return 1 + solve(n/10);
//}

// Iterative Solution
//ll solve(ll n) {
	//ll count = 0;
	//while(n != 0) {
		//n /= 10;
		//++count;
	//}
	//return count;
//}

signed main() {
    ll t;
    cin >> t;
    while(t--) {
	ll num;
	cin >> num;
	cout << solve(num);
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
3
6456
234
7897678

Output:
4
3
7
*/
