#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j || (i + j == c - 1)) {
                if (a[i][j] != 1) {
                    flag = 1;
                }
            } else {
                if (a[i][j] != 0) {
                    flag = 1;
                }
            }
        }
    }

    if (flag == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
