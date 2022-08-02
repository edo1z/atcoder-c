#include <stdio.h>

int main() {
  int n;
  char a[1000][1000] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf(" %c", &a[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (i == j && a[i][j] != '-') {
        printf("incorrect\n");
        return 0;
      } else if (a[i][j] == 'W' && a[j][i] != 'L') {
        printf("incorrect\n");
        return 0;
      } else if (a[i][j] == 'L' && a[j][i] != 'W') {
        printf("incorrect\n");
        return 0;
      } else if (a[i][j] == 'D' && a[j][i] != 'D') {
        printf("incorrect\n");
        return 0;
      }
    }
  }
  printf("correct\n");
  return 0;
}
