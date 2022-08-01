#include <stdio.h>

int main() {
  int n, m, u, v, ans = 0;
  int uv[101][101] = {0};
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i++) {
    scanf("%d %d", &u, &v);
    uv[u][v] = 1;
  }
  for (int a = 1; a <= n; a++) {
    for (int b = a + 1; b <= n; b++) {
      for (int c = b + 1; c <= n; c++) {
        if (uv[a][b] && uv[b][c] && uv[a][c]) {
          ans++;
        }
      }
    }
  }
  printf("%d\n", ans);
}
