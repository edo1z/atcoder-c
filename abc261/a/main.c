#include <stdio.h>

int main() {
  int l1, l2, r1, r2, l, r, ans;
  scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
  l = l1 > l2 ? l1 : l2;
  r = r1 > r2 ? r2 : r1;
  ans = r - l;
  if (ans < 0)
    ans = 0;
  printf("%d\n", ans);
}
