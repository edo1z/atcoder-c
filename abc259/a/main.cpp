#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int n, m, x, t, d, ans = 0;
  cin >> n >> m >> x >> t >> d;
  if (m >= x) {
    ans = t;
  } else {
    ans = t - d * (x - m);
  }
  cout << ans << endl;
}
