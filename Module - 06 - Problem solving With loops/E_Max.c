#include <stdio.h>

int main() {
    int n = 0;
   scanf("%d", &n);
   int mx = 0;
   for (int i = 1; i <= n; i++) {
       int x;
       scanf("%d", &x);
       if (x > mx) {
           mx = x;
       }
    }
    printf("%d\n", mx);

    return 0;
}