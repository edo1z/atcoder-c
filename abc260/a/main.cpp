#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  char c[3];
  int n[3] = {0};
  cin >> c[0] >> c[1] >> c[2];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (c[i] == c[j]) n[i]++;
    }
  }
  for (int i = 0; i < 3; i++) {
    if (n[i] == 1) {
      cout << c[i] << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
