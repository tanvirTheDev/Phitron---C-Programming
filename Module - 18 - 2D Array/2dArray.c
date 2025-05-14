#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c]; // This is allowed in C99 and later (Variable Length Array)

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // New line for each row
    }

    return 0;
}
