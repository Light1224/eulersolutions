#include <iostream>
using namespace std;

inline void solve() {
  long long N;
  N = (698000) / 2;
  __int128 ans = (__int128)N * (2 * N - 1) * (2 * N + 1) / 3;

  string s;
  while (ans) {
    s.push_back('0' + ans % 10);
    ans /= 10;
  }

  reverse(s.begin(), s.end());
  cout << s << endl;
}

signed main() {
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
}
