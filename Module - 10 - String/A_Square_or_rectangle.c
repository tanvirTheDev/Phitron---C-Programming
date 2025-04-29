#include <stdio.h>
#include <string.h>

int main(){
   int n = 0;
   scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        // printf("%d %d\n", a, b);
         if (a == b) {
        printf("Square\n");
    } else {
        printf("Rectangle\n");
    }
    }
   
    return 0;
}