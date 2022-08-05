#include <iostream>
#include <vector>
using namespace std;

bool cmp_math(const vector<int>& a, const vector<int>& b) {
  if (a[1] == b[1]) return a[0] < b[0];
  return a[1] > b[1];
}

bool cmp_english(const vector<int>& a, const vector<int>& b) {
  if (a[2] == b[2]) return a[0] < b[0];
  return a[2] > b[2];
}

bool cmp_total(const vector<int>& a, const vector<int>& b) {
  if (a[3] == b[3]) return a[0] < b[0];
  return a[3] > b[3];
}

bool cmp_id(const vector<int>& a, const vector<int>& b) {
  return a[0] < b[0];
}

int main() {
  int n, x, y, z, i;
  vector<vector<int>> v(1000, vector<int>(4));
  vector<int> ans(1000, -1);
  cin >> n >> x >> y >> z;
  for (i = 0; i < 1000; i++) v[i][0] = i + 1;
  for (i = 0; i < n; i++) cin >> v[i][1];
  for (i = 0; i < n; i++) cin >> v[i][2];
  for (i = 0; i < n; i++) v[i][3] = v[i][1] + v[i][2];
  sort(v.begin(), v.end(), cmp_math);
  sort(v.begin() + x, v.end(), cmp_english);
  sort(v.begin() + x + y, v.end(), cmp_total);
  sort(v.begin(), v.begin() + x + y + z, cmp_id);
  for (i = 0; i < x + y + z; i++) {
    cout << v[i][0] << endl;
  }
}
