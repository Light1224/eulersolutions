#include <iostream>
using namespace std;

bool ispal(int N) {
  int r = 0;
  int x = N;
  while (N > 0) {
    r = r * 10 + N % 10;
    N /= 10;
  }
  return r == x;
}

inline void solve() {
  int ans = 0;

  for (int i = 999; i >= 100; i--) {
    for (int j = i; j >= 100; j--) {
      int p = i * j;
      if (p <= ans)
        break;
      if (ispal(p)) {
        ans = p;
      }
    }
  }

  cout << ans << endl;
}

signed main() {
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
}
