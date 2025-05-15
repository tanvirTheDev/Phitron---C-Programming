#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int i = 0, j = n - 1;
    while(i < j){
        printf("%d %d ", a[i], a[j]);
        i++;
        j--;
    }

    if(i == j) {
        // Print middle element only once when n is odd
        printf("%d", a[i]);
    }

    return 0;
}
