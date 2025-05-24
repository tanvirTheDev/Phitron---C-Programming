#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);



    for(int i = 0; i < T; i++) {
         long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long multiply = a * b * c;
        if(m % multiply == 0) {
            printf("%lld\n", m / multiply);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
