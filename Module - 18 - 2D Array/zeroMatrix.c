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

    int total_val = r * c;
    int zero = 0;

 for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if(arr[i][j] == 0)  zero++;
        }
    }
    if(total_val == zero) printf("It is Zero Matrix");
    else printf("It is not Zero Matrix");
    return 0;
}
