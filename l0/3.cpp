#include <cstdint>
#include <iostream>
using namespace std;

using i64 = __int64_t;
using ll = __int128;

inline void solve() {
  ll N = 600851475143;
  i64 p = 2;
  while (N >= p * p) {
    if (N % p == 0)
      N = N / p;
    else
      p += 1;
  }

  string s;
  while (N) {
    s.push_back('0' + N % 10);
    N /= 10;
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
