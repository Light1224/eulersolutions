#include <iostream>
using namespace std;

using i = __int32_t;

inline void solve() {
  int N = 100;

  i y = (N / 4 * N) * ((N + 1) * (N + 1));
  i x = N * (N + 1) * (2 * N + 1) / 6;

  cout << y - x << endl;
}

signed main() {
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
}
