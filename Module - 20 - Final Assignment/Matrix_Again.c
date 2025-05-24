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


    int last_column = c - 1;
    int last_row = r - 1;
    for (int i = 0; i < r; i++) {
        if (i == last_row) {
            for (int j = 0; j < c; j++) {
                printf("%d ", a[i][j]);
            }
        } 
    }
    printf("\n");
    for (int i = 0; i < c; i++) {
        if (i == last_column) {
            for (int j = 0; j < r; j++) {
                printf("%d ", a[j][i]);
            }
        }
    }

    return 0;
}
