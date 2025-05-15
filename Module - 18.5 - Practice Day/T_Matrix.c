#include <stdio.h>





int main(){

    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        scanf("%d", &a[i][j]);
        // printf("%d ", a[n][n]);
    }
}
    int primarySum = 0;
    int secondarySum = 0;
         for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        if(i == j) primarySum += a[i][j];
        if(i + j == n - 1) secondarySum += a[i][j];
    }
    }
    int result = primarySum - secondarySum;
    if(result < 0) result = result * (-1);
    printf("%d", result);
    
    return 0;
}
