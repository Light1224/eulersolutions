#include <algorithm>
#include <iostream>
using namespace std;

inline void solve() {
  __int128 N = (__int128)0;
  for (int i = 1; i < 1000; i++)
    if (i % 3 == 0 || i % 5 == 0)
      N += i;

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
