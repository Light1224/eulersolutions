#include <iostream>
#include <numeric>
using namespace std;

using ll = long long;

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

inline void solve() {
  int N = 20;
  ll ans = 1;
  for (int i = 2; i <= N; i++)
    ans = lcm(ans, i);
  cout << ans << endl;
}

signed main() {
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
}
