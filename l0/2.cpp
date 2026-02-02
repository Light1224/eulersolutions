#include <iostream>
using namespace std;

using i32 = __int32_t;
using ll = __int128;

inline void solve() {
  i32 a = 2, b = 8;
  ll sum = 0;

  while (a < 4000000) {
    sum += a;
    i32 c = 4 * b + a;
    a = b;
    b = c;
  }

  string s;
  while (sum) {
    s.push_back('0' + sum % 10);
    sum /= 10;
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
