#include <stdio.h>

int main() 

{
    int long long A = 0, B = 0 , C = 0, D = 0;
    scanf("%lld", &A);
    scanf("%lld", &B);
    scanf("%lld", &C);
    scanf("%lld", &D);
    int X = (A * B) - (C * D);
    printf("Difference = %lld", X);

    return 0;
}