#include <stdio.h>

long long repeat(int a[], int n, int i){
    if(i == n) return 0;
    return (long long)a[i] + repeat(a, n, i + 1);
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    // repeat(a, n, 0);
  long long result = repeat(a, n, 0);
 printf("%lld", result);
  
    return 0;
}
