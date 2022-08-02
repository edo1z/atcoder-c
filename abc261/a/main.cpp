#include <iostream>
using namespace std;

int main() {
  int l1, l2, r1, r2, l, r, ans;
  cin >> l1 >> r1 >> l2 >> r2;
  l = l1 > l2 ? l1 : l2;
  r = r1 > r2 ? r2 : r1;
  ans = r - l;
  if (ans < 0)
    ans = 0;
  cout << ans << endl;
}
