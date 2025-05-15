#include <stdio.h>





int main(){

    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
        scanf("%d", &a[r][c]);
        // printf("%d ", a[n][n]);
    }
}
    int n;
    scanf("%d", &n);
    int found = 0;
         for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        if(a[i][j] == n){
            found = 1;
            printf("will  take number");
            return 0;
        }
       
    }
    }
    if(found == 0) printf("will not take number");
    
    
    return 0;
}
