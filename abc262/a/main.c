#include <stdio.h>

int main() {
  int years[4] = {2, 1, 0, 3};
  int y;
  scanf("%d", &y);
  int ans = y + years[y % 4];
  printf("%d\n", ans);
}
