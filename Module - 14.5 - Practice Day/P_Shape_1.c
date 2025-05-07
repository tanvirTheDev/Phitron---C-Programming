#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int start = n;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= start; j++)
        {
            printf("*");
        }
        start--;
        printf("\n");
    }
    return 0;
}
