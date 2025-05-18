#include <stdio.h>
#include <string.h>


 int totalSum(int a[], int n, int i){
    if(i == n - 1) return a[i];
    int sum = a[i] + totalSum(a, n, i + 1);
    return sum;

    // return a[i] + totalSum(a, n, i + 1);
 }

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int sum_result = totalSum(a, n, 0);
    printf("%d", sum_result);

    return 0;
}